#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIAnchorAdaptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIAnchorAdaptor"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& anchors() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIAnchorAdaptor*))(Il2CppBase() + 0x49F414C))(this);
	}

};

}
