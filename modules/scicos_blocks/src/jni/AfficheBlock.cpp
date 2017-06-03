#include "AfficheBlock.hxx"
/* Generated by GIWS (version 2.0.2) with command:
giws --disable-return-size-array --output-dir src/jni/ --throws-exception-on-error --description-file src/jni/Blocks.giws.xml
*/
/*

This is generated code.

This software is a computer program whose purpose is to hide the complexity
of accessing Java objects/methods from C++ code.

This software is governed by the CeCILL-B license under French law and
abiding by the rules of distribution of free software.  You can  use,
modify and/ or redistribute the software under the terms of the CeCILL-B
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info".

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability.

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or
data to be ensured and,  more generally, to use and operate it in the
same conditions as regards security.

The fact that you are presently reading this means that you have had
knowledge of the CeCILL-B license and that you accept its terms.
*/

namespace org_scilab_modules_xcos_block {

                // Static declarations (if any)
                
// Returns the current env

JNIEnv * AfficheBlock::getCurrentEnv() {
JNIEnv * curEnv = NULL;
jint res=this->jvm->AttachCurrentThread(reinterpret_cast<void **>(&curEnv), NULL);
if (res != JNI_OK) {
throw GiwsException::JniException(getCurrentEnv());
}
return curEnv;
}
// Destructor

AfficheBlock::~AfficheBlock() {
JNIEnv * curEnv = NULL;
this->jvm->AttachCurrentThread(reinterpret_cast<void **>(&curEnv), NULL);
curEnv->DeleteGlobalRef(this->instance);
curEnv->DeleteGlobalRef(this->instanceClass);
curEnv->DeleteGlobalRef(this->stringArrayClass);}
// Constructors
AfficheBlock::AfficheBlock(JavaVM * jvm_) {
jmethodID constructObject = NULL ;
jobject localInstance ;
jclass localClass ;

const std::string construct="<init>";
const std::string param="()V";
jvm=jvm_;

JNIEnv * curEnv = getCurrentEnv();

localClass = curEnv->FindClass( this->className().c_str() ) ;
if (localClass == NULL) {
  throw GiwsException::JniClassNotFoundException(curEnv, this->className());
}

this->instanceClass = static_cast<jclass>(curEnv->NewGlobalRef(localClass));

/* localClass is not needed anymore */
curEnv->DeleteLocalRef(localClass);

if (this->instanceClass == NULL) {
throw GiwsException::JniObjectCreationException(curEnv, this->className());
}


constructObject = curEnv->GetMethodID( this->instanceClass, construct.c_str() , param.c_str() ) ;
if(constructObject == NULL){
throw GiwsException::JniObjectCreationException(curEnv, this->className());
}

localInstance = curEnv->NewObject( this->instanceClass, constructObject ) ;
if(localInstance == NULL){
throw GiwsException::JniObjectCreationException(curEnv, this->className());
}
 
this->instance = curEnv->NewGlobalRef(localInstance) ;
if(this->instance == NULL){
throw GiwsException::JniObjectCreationException(curEnv, this->className());
}
/* localInstance not needed anymore */
curEnv->DeleteLocalRef(localInstance);

                /* Methods ID set to NULL */
voidsetValuejstringjava_lang_StringjobjectArray__java_lang_Stringjava_lang_StringID=NULL;


}

AfficheBlock::AfficheBlock(JavaVM * jvm_, jobject JObj) {
        jvm=jvm_;

        JNIEnv * curEnv = getCurrentEnv();

jclass localClass = curEnv->GetObjectClass(JObj);
        this->instanceClass = static_cast<jclass>(curEnv->NewGlobalRef(localClass));
        curEnv->DeleteLocalRef(localClass);

        if (this->instanceClass == NULL) {
throw GiwsException::JniObjectCreationException(curEnv, this->className());
        }

        this->instance = curEnv->NewGlobalRef(JObj) ;
        if(this->instance == NULL){
throw GiwsException::JniObjectCreationException(curEnv, this->className());
        }
        /* Methods ID set to NULL */
        voidsetValuejstringjava_lang_StringjobjectArray__java_lang_Stringjava_lang_StringID=NULL;


}

// Generic methods

void AfficheBlock::synchronize() {
if (getCurrentEnv()->MonitorEnter(instance) != JNI_OK) {
throw GiwsException::JniMonitorException(getCurrentEnv(), "AfficheBlock");
}
}

void AfficheBlock::endSynchronize() {
if ( getCurrentEnv()->MonitorExit(instance) != JNI_OK) {
throw GiwsException::JniMonitorException(getCurrentEnv(), "AfficheBlock");
}
}
// Method(s)

void AfficheBlock::setValue (JavaVM * jvm_, char const* uid, char const* const* const* value, int valueSize, int valueSizeCol){

JNIEnv * curEnv = NULL;
jvm_->AttachCurrentThread(reinterpret_cast<void **>(&curEnv), NULL);
jclass cls = initClass(curEnv);
if ( cls == NULL) {
throw GiwsException::JniCallMethodException(curEnv);
}

static jmethodID voidsetValuejstringjava_lang_StringjobjectArray__java_lang_Stringjava_lang_StringID = curEnv->GetStaticMethodID(cls, "setValue", "(Ljava/lang/String;[[Ljava/lang/String;)V" ) ;
if (voidsetValuejstringjava_lang_StringjobjectArray__java_lang_Stringjava_lang_StringID == NULL) {
throw GiwsException::JniMethodNotFoundException(curEnv, "setValue");
}

jstring uid_ = curEnv->NewStringUTF( uid );
if (uid != NULL && uid_ == NULL)
{
throw GiwsException::JniBadAllocException(curEnv);
}

jclass stringArrayClass = curEnv->FindClass("java/lang/String");
// create java array of array of strings.
jobjectArray value_ = curEnv->NewObjectArray( valueSize, curEnv->FindClass("[Ljava/lang/String;"), NULL);
if (value_ == NULL)
{
throw GiwsException::JniBadAllocException(curEnv);
}

for ( int i = 0; i < valueSize; i++)
{
jobjectArray valueLocal = curEnv->NewObjectArray( valueSizeCol, stringArrayClass, NULL);
// convert each char * to java strings and fill the java array.
for ( int j = 0; j < valueSizeCol; j++) {
jstring TempString = curEnv->NewStringUTF( value[i][j] );

if (TempString == NULL)
{
throw GiwsException::JniBadAllocException(curEnv);
}

curEnv->SetObjectArrayElement( valueLocal, j, TempString);

// avoid keeping reference on too many strings
curEnv->DeleteLocalRef(TempString);
}
curEnv->SetObjectArrayElement(value_, i, valueLocal);
curEnv->DeleteLocalRef(valueLocal);

}
                         curEnv->CallStaticVoidMethod(cls, voidsetValuejstringjava_lang_StringjobjectArray__java_lang_Stringjava_lang_StringID ,uid_, value_);
                        curEnv->DeleteLocalRef(stringArrayClass);
curEnv->DeleteLocalRef(uid_);
curEnv->DeleteLocalRef(value_);
if (curEnv->ExceptionCheck()) {
throw GiwsException::JniCallMethodException(curEnv);
}
}

}