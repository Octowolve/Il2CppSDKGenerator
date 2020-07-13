#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace VersionControl {

class MD5Handler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VersionControl", "MD5Handler"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ComputeMD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ComputeMD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeMd5BigFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T ComputeMD5(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x488AFF4))(0, str);
	}
	template <typename T = Il2CppString*> static T ComputeMD5_1(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x488B104))(0, bytes);
	}
	template <typename T = Il2CppString*> static T ComputeMd5BigFile(Il2CppString* filePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4889FB0))(0, filePath);
	}

};

}
