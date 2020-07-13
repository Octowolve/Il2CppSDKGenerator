#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJNI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidJNI"));
	}


	template <typename T = int32_t> static T AttachCurrentThread() {
		return ((T (*)(void *))(Il2CppBase() + 0x4685CFC))(0);
	}
	template <typename T = int32_t> static T DetachCurrentThread() {
		return ((T (*)(void *))(Il2CppBase() + 0x4685D8C))(0);
	}
	template <typename T = int32_t> static T GetVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x4685E1C))(0);
	}
	template <typename T = uintptr_t> static T FindClass(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4685EAC))(0, name);
	}
	template <typename T = void> static T INTERNAL_CALL_FindClass(Il2CppString* name, uintptr_t* value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4685ED4))(0, name, value);
	}
	template <typename T = uintptr_t> static T FromReflectedMethod(uintptr_t refMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4685F74))(0, refMethod);
	}
	template <typename T = void> static T INTERNAL_CALL_FromReflectedMethod(uintptr_t refMethod, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4685F9C))(0, refMethod, value);
	}
	template <typename T = uintptr_t> static T FromReflectedField(uintptr_t refField) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468603C))(0, refField);
	}
	template <typename T = void> static T INTERNAL_CALL_FromReflectedField(uintptr_t refField, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4686064))(0, refField, value);
	}
	template <typename T = uintptr_t> static T ToReflectedMethod(uintptr_t clazz, uintptr_t methodID, bool isStatic) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4686104))(0, clazz, methodID, isStatic);
	}
	template <typename T = void> static T INTERNAL_CALL_ToReflectedMethod(uintptr_t clazz, uintptr_t methodID, bool isStatic, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x4686130))(0, clazz, methodID, isStatic, value);
	}
	template <typename T = uintptr_t> static T ToReflectedField(uintptr_t clazz, uintptr_t fieldID, bool isStatic) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x46861E0))(0, clazz, fieldID, isStatic);
	}
	template <typename T = void> static T INTERNAL_CALL_ToReflectedField(uintptr_t clazz, uintptr_t fieldID, bool isStatic, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x468620C))(0, clazz, fieldID, isStatic, value);
	}
	template <typename T = uintptr_t> static T GetSuperclass(uintptr_t clazz) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46862BC))(0, clazz);
	}
	template <typename T = void> static T INTERNAL_CALL_GetSuperclass(uintptr_t clazz, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x46862E4))(0, clazz, value);
	}
	template <typename T = bool> static T IsAssignableFrom(uintptr_t clazz1, uintptr_t clazz2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4686384))(0, clazz1, clazz2);
	}
	template <typename T = int32_t> static T Throw(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4686424))(0, obj);
	}
	template <typename T = int32_t> static T ThrowNew(uintptr_t clazz, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46864BC))(0, clazz, message);
	}
	template <typename T = uintptr_t> static T ExceptionOccurred() {
		return ((T (*)(void *))(Il2CppBase() + 0x468655C))(0);
	}
	template <typename T = void> static T INTERNAL_CALL_ExceptionOccurred(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4686584))(0, value);
	}
	template <typename T = void> static T ExceptionDescribe() {
		return ((T (*)(void *))(Il2CppBase() + 0x468661C))(0);
	}
	template <typename T = void> static T ExceptionClear() {
		return ((T (*)(void *))(Il2CppBase() + 0x46866AC))(0);
	}
	template <typename T = void> static T FatalError(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x468673C))(0, message);
	}
	template <typename T = int32_t> static T PushLocalFrame(int32_t capacity) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46867D4))(0, capacity);
	}
	template <typename T = uintptr_t> static T PopLocalFrame(uintptr_t ptr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468686C))(0, ptr);
	}
	template <typename T = void> static T INTERNAL_CALL_PopLocalFrame(uintptr_t ptr, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4686894))(0, ptr, value);
	}
	template <typename T = uintptr_t> static T NewGlobalRef(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4686934))(0, obj);
	}
	template <typename T = void> static T INTERNAL_CALL_NewGlobalRef(uintptr_t obj, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x468695C))(0, obj, value);
	}
	template <typename T = void> static T DeleteGlobalRef(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46869FC))(0, obj);
	}
	template <typename T = uintptr_t> static T NewLocalRef(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467AEA8))(0, obj);
	}
	template <typename T = void> static T INTERNAL_CALL_NewLocalRef(uintptr_t obj, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4686A94))(0, obj, value);
	}
	template <typename T = void> static T DeleteLocalRef(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4686B34))(0, obj);
	}
	template <typename T = bool> static T IsSameObject(uintptr_t obj1, uintptr_t obj2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4686BCC))(0, obj1, obj2);
	}
	template <typename T = int32_t> static T EnsureLocalCapacity(int32_t capacity) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4686C6C))(0, capacity);
	}
	template <typename T = uintptr_t> static T AllocObject(uintptr_t clazz) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4686D04))(0, clazz);
	}
	template <typename T = void> static T INTERNAL_CALL_AllocObject(uintptr_t clazz, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4686D2C))(0, clazz, value);
	}
	template <typename T = uintptr_t> static T NewObject(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4686DCC))(0, clazz, methodID, args);
	}
	template <typename T = void> static T INTERNAL_CALL_NewObject(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4686DF8))(0, clazz, methodID, args, value);
	}
	template <typename T = uintptr_t> static T GetObjectClass(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4686EA8))(0, obj);
	}
	template <typename T = void> static T INTERNAL_CALL_GetObjectClass(uintptr_t obj, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4686ED0))(0, obj, value);
	}
	template <typename T = bool> static T IsInstanceOf(uintptr_t obj, uintptr_t clazz) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4686F70))(0, obj, clazz);
	}
	template <typename T = uintptr_t> static T GetMethodID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4687010))(0, clazz, name, sig);
	}
	template <typename T = void> static T INTERNAL_CALL_GetMethodID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x468703C))(0, clazz, name, sig, value);
	}
	template <typename T = uintptr_t> static T GetFieldID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46870EC))(0, clazz, name, sig);
	}
	template <typename T = void> static T INTERNAL_CALL_GetFieldID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4687118))(0, clazz, name, sig, value);
	}
	template <typename T = uintptr_t> static T GetStaticMethodID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46871C8))(0, clazz, name, sig);
	}
	template <typename T = void> static T INTERNAL_CALL_GetStaticMethodID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x46871F4))(0, clazz, name, sig, value);
	}
	template <typename T = uintptr_t> static T GetStaticFieldID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46872A4))(0, clazz, name, sig);
	}
	template <typename T = void> static T INTERNAL_CALL_GetStaticFieldID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x46872D0))(0, clazz, name, sig, value);
	}
	template <typename T = uintptr_t> static T NewStringUTF(Il2CppString* bytes) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4687380))(0, bytes);
	}
	template <typename T = void> static T INTERNAL_CALL_NewStringUTF(Il2CppString* bytes, uintptr_t* value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x46873A8))(0, bytes, value);
	}
	template <typename T = int32_t> static T GetStringUTFLength(uintptr_t str) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4687448))(0, str);
	}
	template <typename T = Il2CppString*> static T GetStringUTFChars(uintptr_t str) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467AE00))(0, str);
	}
	template <typename T = Il2CppString*> static T CallStringMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46874E0))(0, obj, methodID, args);
	}
	template <typename T = uintptr_t> static T CallObjectMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4687588))(0, obj, methodID, args);
	}
	template <typename T = void> static T INTERNAL_CALL_CallObjectMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x46875B4))(0, obj, methodID, args, value);
	}
	template <typename T = int32_t> static T CallIntMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4687664))(0, obj, methodID, args);
	}
	template <typename T = bool> static T CallBooleanMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468770C))(0, obj, methodID, args);
	}
	template <typename T = int16_t> static T CallShortMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46877B4))(0, obj, methodID, args);
	}
	template <typename T = unsigned char> static T CallByteMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468785C))(0, obj, methodID, args);
	}
	template <typename T = char> static T CallCharMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4687904))(0, obj, methodID, args);
	}
	template <typename T = float> static T CallFloatMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46879AC))(0, obj, methodID, args);
	}
	template <typename T = double> static T CallDoubleMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4687A54))(0, obj, methodID, args);
	}
	template <typename T = int64_t> static T CallLongMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4687AFC))(0, obj, methodID, args);
	}
	template <typename T = void> static T CallVoidMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4687BA4))(0, obj, methodID, args);
	}
	template <typename T = Il2CppString*> static T GetStringField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4687C4C))(0, obj, fieldID);
	}
	template <typename T = uintptr_t> static T GetObjectField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4687CEC))(0, obj, fieldID);
	}
	template <typename T = void> static T INTERNAL_CALL_GetObjectField(uintptr_t obj, uintptr_t fieldID, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4687D14))(0, obj, fieldID, value);
	}
	template <typename T = bool> static T GetBooleanField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4687DBC))(0, obj, fieldID);
	}
	template <typename T = unsigned char> static T GetByteField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4687E5C))(0, obj, fieldID);
	}
	template <typename T = char> static T GetCharField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4687EFC))(0, obj, fieldID);
	}
	template <typename T = int16_t> static T GetShortField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4687F9C))(0, obj, fieldID);
	}
	template <typename T = int32_t> static T GetIntField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468803C))(0, obj, fieldID);
	}
	template <typename T = int64_t> static T GetLongField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46880DC))(0, obj, fieldID);
	}
	template <typename T = float> static T GetFloatField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468817C))(0, obj, fieldID);
	}
	template <typename T = double> static T GetDoubleField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468821C))(0, obj, fieldID);
	}
	template <typename T = void> static T SetStringField(uintptr_t obj, uintptr_t fieldID, Il2CppString* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46882BC))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetObjectField(uintptr_t obj, uintptr_t fieldID, uintptr_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4688364))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetBooleanField(uintptr_t obj, uintptr_t fieldID, bool val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x468840C))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetByteField(uintptr_t obj, uintptr_t fieldID, unsigned char val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, unsigned char))(Il2CppBase() + 0x46884B4))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetCharField(uintptr_t obj, uintptr_t fieldID, char val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, char))(Il2CppBase() + 0x468855C))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetShortField(uintptr_t obj, uintptr_t fieldID, int16_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int16_t))(Il2CppBase() + 0x4688604))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetIntField(uintptr_t obj, uintptr_t fieldID, int32_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x46886AC))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetLongField(uintptr_t obj, uintptr_t fieldID, int64_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x4688754))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetFloatField(uintptr_t obj, uintptr_t fieldID, float val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4688804))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetDoubleField(uintptr_t obj, uintptr_t fieldID, double val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, double))(Il2CppBase() + 0x46888AC))(0, obj, fieldID, val);
	}
	template <typename T = Il2CppString*> static T CallStaticStringMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468895C))(0, clazz, methodID, args);
	}
	template <typename T = uintptr_t> static T CallStaticObjectMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4688A04))(0, clazz, methodID, args);
	}
	template <typename T = void> static T INTERNAL_CALL_CallStaticObjectMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4688A30))(0, clazz, methodID, args, value);
	}
	template <typename T = int32_t> static T CallStaticIntMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4688AE0))(0, clazz, methodID, args);
	}
	template <typename T = bool> static T CallStaticBooleanMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4688B88))(0, clazz, methodID, args);
	}
	template <typename T = int16_t> static T CallStaticShortMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4688C30))(0, clazz, methodID, args);
	}
	template <typename T = unsigned char> static T CallStaticByteMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4688CD8))(0, clazz, methodID, args);
	}
	template <typename T = char> static T CallStaticCharMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4688D80))(0, clazz, methodID, args);
	}
	template <typename T = float> static T CallStaticFloatMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4688E28))(0, clazz, methodID, args);
	}
	template <typename T = double> static T CallStaticDoubleMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4688ED0))(0, clazz, methodID, args);
	}
	template <typename T = int64_t> static T CallStaticLongMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4688F78))(0, clazz, methodID, args);
	}
	template <typename T = void> static T CallStaticVoidMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4689020))(0, clazz, methodID, args);
	}
	template <typename T = Il2CppString*> static T GetStaticStringField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46890C8))(0, clazz, fieldID);
	}
	template <typename T = uintptr_t> static T GetStaticObjectField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4689168))(0, clazz, fieldID);
	}
	template <typename T = void> static T INTERNAL_CALL_GetStaticObjectField(uintptr_t clazz, uintptr_t fieldID, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4689190))(0, clazz, fieldID, value);
	}
	template <typename T = bool> static T GetStaticBooleanField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4689238))(0, clazz, fieldID);
	}
	template <typename T = unsigned char> static T GetStaticByteField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46892D8))(0, clazz, fieldID);
	}
	template <typename T = char> static T GetStaticCharField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4689378))(0, clazz, fieldID);
	}
	template <typename T = int16_t> static T GetStaticShortField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4689418))(0, clazz, fieldID);
	}
	template <typename T = int32_t> static T GetStaticIntField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46894B8))(0, clazz, fieldID);
	}
	template <typename T = int64_t> static T GetStaticLongField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4689558))(0, clazz, fieldID);
	}
	template <typename T = float> static T GetStaticFloatField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46895F8))(0, clazz, fieldID);
	}
	template <typename T = double> static T GetStaticDoubleField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4689698))(0, clazz, fieldID);
	}
	template <typename T = void> static T SetStaticStringField(uintptr_t clazz, uintptr_t fieldID, Il2CppString* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4689738))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticObjectField(uintptr_t clazz, uintptr_t fieldID, uintptr_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46897E0))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticBooleanField(uintptr_t clazz, uintptr_t fieldID, bool val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4689888))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticByteField(uintptr_t clazz, uintptr_t fieldID, unsigned char val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, unsigned char))(Il2CppBase() + 0x4689930))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticCharField(uintptr_t clazz, uintptr_t fieldID, char val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, char))(Il2CppBase() + 0x46899D8))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticShortField(uintptr_t clazz, uintptr_t fieldID, int16_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int16_t))(Il2CppBase() + 0x4689A80))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticIntField(uintptr_t clazz, uintptr_t fieldID, int32_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4689B28))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticLongField(uintptr_t clazz, uintptr_t fieldID, int64_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x4689BD0))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticFloatField(uintptr_t clazz, uintptr_t fieldID, float val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4689C80))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticDoubleField(uintptr_t clazz, uintptr_t fieldID, double val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, double))(Il2CppBase() + 0x4689D28))(0, clazz, fieldID, val);
	}
	template <typename T = uintptr_t> static T ToBooleanArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4689DD8))(0, array);
	}
	template <typename T = void> static T INTERNAL_CALL_ToBooleanArray(Il2CppArray<uintptr_t>* array, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4689E00))(0, array, value);
	}
	template <typename T = uintptr_t> static T ToByteArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4689EA0))(0, array);
	}
	template <typename T = void> static T INTERNAL_CALL_ToByteArray(Il2CppArray<uintptr_t>* array, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4689EC8))(0, array, value);
	}
	template <typename T = uintptr_t> static T ToCharArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4689F68))(0, array);
	}
	template <typename T = void> static T INTERNAL_CALL_ToCharArray(Il2CppArray<uintptr_t>* array, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4689F90))(0, array, value);
	}
	template <typename T = uintptr_t> static T ToShortArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468A030))(0, array);
	}
	template <typename T = void> static T INTERNAL_CALL_ToShortArray(Il2CppArray<uintptr_t>* array, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x468A058))(0, array, value);
	}
	template <typename T = uintptr_t> static T ToIntArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468A0F8))(0, array);
	}
	template <typename T = void> static T INTERNAL_CALL_ToIntArray(Il2CppArray<uintptr_t>* array, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x468A120))(0, array, value);
	}
	template <typename T = uintptr_t> static T ToLongArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468A1C0))(0, array);
	}
	template <typename T = void> static T INTERNAL_CALL_ToLongArray(Il2CppArray<uintptr_t>* array, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x468A1E8))(0, array, value);
	}
	template <typename T = uintptr_t> static T ToFloatArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468A288))(0, array);
	}
	template <typename T = void> static T INTERNAL_CALL_ToFloatArray(Il2CppArray<uintptr_t>* array, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x468A2B0))(0, array, value);
	}
	template <typename T = uintptr_t> static T ToDoubleArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468A350))(0, array);
	}
	template <typename T = void> static T INTERNAL_CALL_ToDoubleArray(Il2CppArray<uintptr_t>* array, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x468A378))(0, array, value);
	}
	template <typename T = uintptr_t> static T ToObjectArray(Il2CppArray<uintptr_t>* array, uintptr_t arrayClass) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x468A418))(0, array, arrayClass);
	}
	template <typename T = void> static T INTERNAL_CALL_ToObjectArray(Il2CppArray<uintptr_t>* array, uintptr_t arrayClass, uintptr_t* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x468A440))(0, array, arrayClass, value);
	}
	template <typename T = uintptr_t> static T ToObjectArray_1(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468A4E8))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromBooleanArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468A58C))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromByteArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468A624))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromCharArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468A6BC))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromShortArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468A754))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromIntArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468A7EC))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromLongArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468A884))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromFloatArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468A91C))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromDoubleArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468A9B4))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromObjectArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468AA4C))(0, array);
	}
	template <typename T = int32_t> static T GetArrayLength(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468AAE4))(0, array);
	}
	template <typename T = uintptr_t> static T NewBooleanArray(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x468AB7C))(0, size);
	}
	template <typename T = void> static T INTERNAL_CALL_NewBooleanArray(int32_t size, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x468ABA4))(0, size, value);
	}
	template <typename T = uintptr_t> static T NewByteArray(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x468AC44))(0, size);
	}
	template <typename T = void> static T INTERNAL_CALL_NewByteArray(int32_t size, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x468AC6C))(0, size, value);
	}
	template <typename T = uintptr_t> static T NewCharArray(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x468AD0C))(0, size);
	}
	template <typename T = void> static T INTERNAL_CALL_NewCharArray(int32_t size, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x468AD34))(0, size, value);
	}
	template <typename T = uintptr_t> static T NewShortArray(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x468ADD4))(0, size);
	}
	template <typename T = void> static T INTERNAL_CALL_NewShortArray(int32_t size, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x468ADFC))(0, size, value);
	}
	template <typename T = uintptr_t> static T NewIntArray(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x468AE9C))(0, size);
	}
	template <typename T = void> static T INTERNAL_CALL_NewIntArray(int32_t size, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x468AEC4))(0, size, value);
	}
	template <typename T = uintptr_t> static T NewLongArray(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x468AF64))(0, size);
	}
	template <typename T = void> static T INTERNAL_CALL_NewLongArray(int32_t size, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x468AF8C))(0, size, value);
	}
	template <typename T = uintptr_t> static T NewFloatArray(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x468B02C))(0, size);
	}
	template <typename T = void> static T INTERNAL_CALL_NewFloatArray(int32_t size, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x468B054))(0, size, value);
	}
	template <typename T = uintptr_t> static T NewDoubleArray(int32_t size) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x468B0F4))(0, size);
	}
	template <typename T = void> static T INTERNAL_CALL_NewDoubleArray(int32_t size, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x468B11C))(0, size, value);
	}
	template <typename T = uintptr_t> static T NewObjectArray(int32_t size, uintptr_t clazz, uintptr_t obj) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x467EF98))(0, size, clazz, obj);
	}
	template <typename T = void> static T INTERNAL_CALL_NewObjectArray(int32_t size, uintptr_t clazz, uintptr_t obj, uintptr_t* value) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x468B1BC))(0, size, clazz, obj, value);
	}
	template <typename T = bool> static T GetBooleanArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x468B26C))(0, array, index);
	}
	template <typename T = unsigned char> static T GetByteArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x468B30C))(0, array, index);
	}
	template <typename T = char> static T GetCharArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x468B3AC))(0, array, index);
	}
	template <typename T = int16_t> static T GetShortArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x468B44C))(0, array, index);
	}
	template <typename T = int32_t> static T GetIntArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x468B4EC))(0, array, index);
	}
	template <typename T = int64_t> static T GetLongArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x468B58C))(0, array, index);
	}
	template <typename T = float> static T GetFloatArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x468B62C))(0, array, index);
	}
	template <typename T = double> static T GetDoubleArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x468B6CC))(0, array, index);
	}
	template <typename T = uintptr_t> static T GetObjectArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x468B76C))(0, array, index);
	}
	template <typename T = void> static T INTERNAL_CALL_GetObjectArrayElement(uintptr_t array, int32_t index, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x468B794))(0, array, index, value);
	}
	template <typename T = void> static T SetBooleanArrayElement(uintptr_t array, int32_t index, unsigned char val) {
		return ((T (*)(void *, uintptr_t, int32_t, unsigned char))(Il2CppBase() + 0x468B83C))(0, array, index, val);
	}
	template <typename T = void> static T SetByteArrayElement(uintptr_t array, int32_t index, signed char val) {
		return ((T (*)(void *, uintptr_t, int32_t, signed char))(Il2CppBase() + 0x468B8E4))(0, array, index, val);
	}
	template <typename T = void> static T SetCharArrayElement(uintptr_t array, int32_t index, char val) {
		return ((T (*)(void *, uintptr_t, int32_t, char))(Il2CppBase() + 0x468B98C))(0, array, index, val);
	}
	template <typename T = void> static T SetShortArrayElement(uintptr_t array, int32_t index, int16_t val) {
		return ((T (*)(void *, uintptr_t, int32_t, int16_t))(Il2CppBase() + 0x468BA34))(0, array, index, val);
	}
	template <typename T = void> static T SetIntArrayElement(uintptr_t array, int32_t index, int32_t val) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x468BADC))(0, array, index, val);
	}
	template <typename T = void> static T SetLongArrayElement(uintptr_t array, int32_t index, int64_t val) {
		return ((T (*)(void *, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0x468BB84))(0, array, index, val);
	}
	template <typename T = void> static T SetFloatArrayElement(uintptr_t array, int32_t index, float val) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x468BC34))(0, array, index, val);
	}
	template <typename T = void> static T SetDoubleArrayElement(uintptr_t array, int32_t index, double val) {
		return ((T (*)(void *, uintptr_t, int32_t, double))(Il2CppBase() + 0x468BCDC))(0, array, index, val);
	}
	template <typename T = void> static T SetObjectArrayElement(uintptr_t array, int32_t index, uintptr_t obj) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x467EFC4))(0, array, index, obj);
	}

};

}
