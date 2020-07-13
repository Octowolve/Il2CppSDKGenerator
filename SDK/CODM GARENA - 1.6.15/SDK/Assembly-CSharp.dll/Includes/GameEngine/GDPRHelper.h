#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GDPRHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GDPRHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& decryptKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& decryptVector() {
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
	template <typename T = uintptr_t> static T& __Hotfix1_AESEncrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AESEncryptToStringForGDPR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AESDecrypt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> static T get_Key() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E3AF0))(0);
	}
	template <typename T = Il2CppString*> static T get_IV() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E3B68))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AESEncrypt(Il2CppString* Data) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x36E3BE0))(0, Data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AESEncrypt_1(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x36E3D54))(0, data);
	}
	template <typename T = Il2CppString*> static T AESEncryptToStringForGDPR(Il2CppString* Data) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x36E444C))(0, Data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AESDecrypt(Il2CppArray<uintptr_t>* Data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x36E451C))(0, Data);
	}

};

}
