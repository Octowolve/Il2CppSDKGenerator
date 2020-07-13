#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AESHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AESHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& keyBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& vectorBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& decryptBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AESEncrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AESEncryptString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AESDecrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AESDecryptString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AESDecryptFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AESDecryptFileString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppString*> static T get_Key() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B3D820))(0);
	}
	template <typename T = Il2CppString*> static T get_IV() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B3D898))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AESEncrypt(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B3D910))(0, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AESEncryptString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B3DF24))(0, str);
	}
	template <typename T = bool> static T AESDecrypt(Il2CppArray<uintptr_t>* bytes, uintptr_t* count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x2B3E108))(0, bytes, count);
	}
	template <typename T = Il2CppString*> static T AESDecryptString(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B3E870))(0, bytes);
	}
	template <typename T = bool> static T AESDecryptFile(Il2CppString* path, Il2CppArray<uintptr_t>** bytes, uintptr_t* count) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>**, uintptr_t*))(Il2CppBase() + 0x2B3EA88))(0, path, bytes, count);
	}
	template <typename T = Il2CppString*> static T AESDecryptFileString(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2B3EC6C))(0, path);
	}

};

}
