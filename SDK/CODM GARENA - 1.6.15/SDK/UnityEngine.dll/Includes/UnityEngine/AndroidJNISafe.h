#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJNISafe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidJNISafe"));
	}


	template <typename T = void> static T CheckException() {
		return ((T (*)(void *))(Il2CppBase() + 0x468C184))(0);
	}
	template <typename T = void> static T DeleteGlobalRef(uintptr_t globalref) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468C448))(0, globalref);
	}
	template <typename T = void> static T DeleteLocalRef(uintptr_t localref) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467EB70))(0, localref);
	}
	template <typename T = uintptr_t> static T NewStringUTF(Il2CppString* bytes) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x467B7B4))(0, bytes);
	}
	template <typename T = Il2CppString*> static T GetStringUTFChars(uintptr_t str) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468C4EC))(0, str);
	}
	template <typename T = uintptr_t> static T GetObjectClass(uintptr_t ptr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4683F94))(0, ptr);
	}
	template <typename T = uintptr_t> static T GetStaticMethodID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x467FDD8))(0, clazz, name, sig);
	}
	template <typename T = uintptr_t> static T GetMethodID(uintptr_t obj, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x467F750))(0, obj, name, sig);
	}
	template <typename T = uintptr_t> static T GetFieldID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x46803E8))(0, clazz, name, sig);
	}
	template <typename T = uintptr_t> static T GetStaticFieldID(uintptr_t clazz, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4680380))(0, clazz, name, sig);
	}
	template <typename T = uintptr_t> static T FromReflectedMethod(uintptr_t refMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467F6EC))(0, refMethod);
	}
	template <typename T = uintptr_t> static T FromReflectedField(uintptr_t refField) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468031C))(0, refField);
	}
	template <typename T = uintptr_t> static T FindClass(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x467EF34))(0, name);
	}
	template <typename T = uintptr_t> static T NewObject(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46848A0))(0, clazz, methodID, args);
	}
	template <typename T = void> static T SetStaticObjectField(uintptr_t clazz, uintptr_t fieldID, uintptr_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x468C53C))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticStringField(uintptr_t clazz, uintptr_t fieldID, Il2CppString* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x468C590))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticCharField(uintptr_t clazz, uintptr_t fieldID, char val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, char))(Il2CppBase() + 0x468C5E4))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticDoubleField(uintptr_t clazz, uintptr_t fieldID, double val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, double))(Il2CppBase() + 0x468C638))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticFloatField(uintptr_t clazz, uintptr_t fieldID, float val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x468C694))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticLongField(uintptr_t clazz, uintptr_t fieldID, int64_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x468C6E8))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticShortField(uintptr_t clazz, uintptr_t fieldID, int16_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int16_t))(Il2CppBase() + 0x468C748))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticByteField(uintptr_t clazz, uintptr_t fieldID, unsigned char val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, unsigned char))(Il2CppBase() + 0x468C79C))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticBooleanField(uintptr_t clazz, uintptr_t fieldID, bool val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x468C7F0))(0, clazz, fieldID, val);
	}
	template <typename T = void> static T SetStaticIntField(uintptr_t clazz, uintptr_t fieldID, int32_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x468C844))(0, clazz, fieldID, val);
	}
	template <typename T = uintptr_t> static T GetStaticObjectField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468C898))(0, clazz, fieldID);
	}
	template <typename T = Il2CppString*> static T GetStaticStringField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468C8FC))(0, clazz, fieldID);
	}
	template <typename T = char> static T GetStaticCharField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468C94C))(0, clazz, fieldID);
	}
	template <typename T = double> static T GetStaticDoubleField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468C99C))(0, clazz, fieldID);
	}
	template <typename T = float> static T GetStaticFloatField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468C9F4))(0, clazz, fieldID);
	}
	template <typename T = int64_t> static T GetStaticLongField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468CA50))(0, clazz, fieldID);
	}
	template <typename T = int16_t> static T GetStaticShortField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468CAB4))(0, clazz, fieldID);
	}
	template <typename T = unsigned char> static T GetStaticByteField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468CB04))(0, clazz, fieldID);
	}
	template <typename T = bool> static T GetStaticBooleanField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468CB54))(0, clazz, fieldID);
	}
	template <typename T = int32_t> static T GetStaticIntField(uintptr_t clazz, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468CBA4))(0, clazz, fieldID);
	}
	template <typename T = void> static T CallStaticVoidMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4684A4C))(0, clazz, methodID, args);
	}
	template <typename T = uintptr_t> static T CallStaticObjectMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CBF4))(0, clazz, methodID, args);
	}
	template <typename T = Il2CppString*> static T CallStaticStringMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CC5C))(0, clazz, methodID, args);
	}
	template <typename T = char> static T CallStaticCharMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CCB4))(0, clazz, methodID, args);
	}
	template <typename T = double> static T CallStaticDoubleMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CD0C))(0, clazz, methodID, args);
	}
	template <typename T = float> static T CallStaticFloatMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CD6C))(0, clazz, methodID, args);
	}
	template <typename T = int64_t> static T CallStaticLongMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CDD0))(0, clazz, methodID, args);
	}
	template <typename T = int16_t> static T CallStaticShortMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CE3C))(0, clazz, methodID, args);
	}
	template <typename T = unsigned char> static T CallStaticByteMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CE94))(0, clazz, methodID, args);
	}
	template <typename T = bool> static T CallStaticBooleanMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CEEC))(0, clazz, methodID, args);
	}
	template <typename T = int32_t> static T CallStaticIntMethod(uintptr_t clazz, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468CF44))(0, clazz, methodID, args);
	}
	template <typename T = void> static T SetObjectField(uintptr_t obj, uintptr_t fieldID, uintptr_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x468CF9C))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetStringField(uintptr_t obj, uintptr_t fieldID, Il2CppString* val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x468CFF0))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetCharField(uintptr_t obj, uintptr_t fieldID, char val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, char))(Il2CppBase() + 0x468D044))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetDoubleField(uintptr_t obj, uintptr_t fieldID, double val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, double))(Il2CppBase() + 0x468D098))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetFloatField(uintptr_t obj, uintptr_t fieldID, float val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x468D0F4))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetLongField(uintptr_t obj, uintptr_t fieldID, int64_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x468D148))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetShortField(uintptr_t obj, uintptr_t fieldID, int16_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int16_t))(Il2CppBase() + 0x468D1A8))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetByteField(uintptr_t obj, uintptr_t fieldID, unsigned char val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, unsigned char))(Il2CppBase() + 0x468D1FC))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetBooleanField(uintptr_t obj, uintptr_t fieldID, bool val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x468D250))(0, obj, fieldID, val);
	}
	template <typename T = void> static T SetIntField(uintptr_t obj, uintptr_t fieldID, int32_t val) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x468D2A4))(0, obj, fieldID, val);
	}
	template <typename T = uintptr_t> static T GetObjectField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D2F8))(0, obj, fieldID);
	}
	template <typename T = Il2CppString*> static T GetStringField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D35C))(0, obj, fieldID);
	}
	template <typename T = char> static T GetCharField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D3AC))(0, obj, fieldID);
	}
	template <typename T = double> static T GetDoubleField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D3FC))(0, obj, fieldID);
	}
	template <typename T = float> static T GetFloatField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D454))(0, obj, fieldID);
	}
	template <typename T = int64_t> static T GetLongField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D4B0))(0, obj, fieldID);
	}
	template <typename T = int16_t> static T GetShortField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D514))(0, obj, fieldID);
	}
	template <typename T = unsigned char> static T GetByteField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D564))(0, obj, fieldID);
	}
	template <typename T = bool> static T GetBooleanField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D5B4))(0, obj, fieldID);
	}
	template <typename T = int32_t> static T GetIntField(uintptr_t obj, uintptr_t fieldID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468D604))(0, obj, fieldID);
	}
	template <typename T = void> static T CallVoidMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46849F8))(0, obj, methodID, args);
	}
	template <typename T = uintptr_t> static T CallObjectMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D654))(0, obj, methodID, args);
	}
	template <typename T = Il2CppString*> static T CallStringMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D6BC))(0, obj, methodID, args);
	}
	template <typename T = char> static T CallCharMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D714))(0, obj, methodID, args);
	}
	template <typename T = double> static T CallDoubleMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D76C))(0, obj, methodID, args);
	}
	template <typename T = float> static T CallFloatMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D7CC))(0, obj, methodID, args);
	}
	template <typename T = int64_t> static T CallLongMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D830))(0, obj, methodID, args);
	}
	template <typename T = int16_t> static T CallShortMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D89C))(0, obj, methodID, args);
	}
	template <typename T = unsigned char> static T CallByteMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D8F4))(0, obj, methodID, args);
	}
	template <typename T = bool> static T CallBooleanMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D94C))(0, obj, methodID, args);
	}
	template <typename T = int32_t> static T CallIntMethod(uintptr_t obj, uintptr_t methodID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468D9A4))(0, obj, methodID, args);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromCharArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468D9FC))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromDoubleArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468DA4C))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromFloatArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468DA9C))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromLongArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468DAEC))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromShortArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468DB3C))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromByteArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468DB8C))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromBooleanArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468DBDC))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromIntArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468DC2C))(0, array);
	}
	template <typename T = uintptr_t> static T ToObjectArray(Il2CppArray<uintptr_t>* array, uintptr_t type) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x467F06C))(0, array, type);
	}
	template <typename T = uintptr_t> static T ToCharArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467EED0))(0, array);
	}
	template <typename T = uintptr_t> static T ToDoubleArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467EE6C))(0, array);
	}
	template <typename T = uintptr_t> static T ToFloatArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467EE08))(0, array);
	}
	template <typename T = uintptr_t> static T ToLongArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467EDA4))(0, array);
	}
	template <typename T = uintptr_t> static T ToShortArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467ED40))(0, array);
	}
	template <typename T = uintptr_t> static T ToByteArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467ECDC))(0, array);
	}
	template <typename T = uintptr_t> static T ToBooleanArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467EC78))(0, array);
	}
	template <typename T = uintptr_t> static T ToIntArray(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467EC14))(0, array);
	}
	template <typename T = uintptr_t> static T GetObjectArrayElement(uintptr_t array, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x467AC40))(0, array, index);
	}
	template <typename T = int32_t> static T GetArrayLength(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467ABF0))(0, array);
	}

};

}
