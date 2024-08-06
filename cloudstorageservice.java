import java.util.HashMap;
import java.util.Map;

public class CloudStorageService {
    private Map<String, String> storage;
    private final int redundancyFactor;

    public CloudStorageService(int redundancyFactor) {
        this.storage = new HashMap<>();
        this.redundancyFactor = redundancyFactor;
    }

    public void uploadFile(String filename, String data) {
        for (int i = 0; i < redundancyFactor; i++) {
            storage.put(filename + "_replica_" + i, data);
        }
        System.out.println("File uploaded with redundancy factor: " + redundancyFactor);
    }

    public String downloadFile(String filename) {
        StringBuilder data = new StringBuilder();
        for (int i = 0; i < redundancyFactor; i++) {
            String replicaData = storage.get(filename + "_replica_" + i);
            if (replicaData != null) {
                data.append(replicaData).append("\n");
            }
        }
        return data.toString();
    }

    public static void main(String[] args) {
        CloudStorageService cloudService = new CloudStorageService(3);

        // Upload a file with redundancy
        cloudService.uploadFile("example.txt", "Hello, Cloud Storage!");

        // Download the file
        String fileData = cloudService.downloadFile("example.txt");
        System.out.println("File Data: \n" + fileData);
    }
}
