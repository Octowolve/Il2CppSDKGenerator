#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class HtSize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "HtSize"));
	}

	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HtSize*))(Il2CppBase() + 0x4767BA4))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(HtSize*))(Il2CppBase() + 0x4767C5C))(this);
	}

};

}
