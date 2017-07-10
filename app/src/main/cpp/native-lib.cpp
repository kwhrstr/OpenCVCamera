#include <jni.h>
#include <string>
#include <opencv2/core.hpp>
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_kawarashotaro_opencvpractise_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    cv::Mat mat;
    std::ostringstream oss;
    oss << "rows: " << mat.rows << ", cols: " << mat.cols;
    std::string str = oss.str();
    return env->NewStringUTF(str.c_str());
}
