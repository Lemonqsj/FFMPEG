package kc.com.ffmpegplayer;

/**
 * @Auther: Lemon
 * @Date: 2019/2/26 11:11 32
 * @Describe: the infor of the class
 */
public class FfmpegPlayer {

    static {
        System.loadLibrary("native-lib");
    }




    public void setDataSource(String dataSource){

    }

    public void onError(int errorCode){



    }

    native void prepare(String datasouce);

}
