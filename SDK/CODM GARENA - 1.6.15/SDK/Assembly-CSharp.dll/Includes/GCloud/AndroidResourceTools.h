#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class AndroidResourceTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "AndroidResourceTools"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetResourceID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> static T GetResourceID(Il2CppString* resName, Il2CppString* typeName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x450B95C))(0, resName, typeName);
	}
	template <typename T = int32_t> static T gcloud_utils_get_res_id(Il2CppString* resName, Il2CppString* typeName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x450BD28))(0, resName, typeName);
	}

};

}
