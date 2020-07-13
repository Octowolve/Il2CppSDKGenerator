#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKToolsRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKToolsRet"));
	}

	template <typename T = Il2CppString*> T& link() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Link() {
		return ((T (*)(MSDKToolsRet*))(Il2CppBase() + 0x46E05BC))(this);
	}
	template <typename T = void> T set_Link(Il2CppString* value) {
		return ((T (*)(MSDKToolsRet*, Il2CppString*))(Il2CppBase() + 0x46E05C4))(this, value);
	}

};

}
