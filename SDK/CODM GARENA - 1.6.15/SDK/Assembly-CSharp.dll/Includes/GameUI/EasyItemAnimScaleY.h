#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyItemAnimScaleY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyItemAnimScaleY"));
	}

	template <typename T = uintptr_t> T& m_TweenScale() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Prepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t obj) {
		return ((T (*)(EasyItemAnimScaleY*, uintptr_t))(Il2CppBase() + 0x46F730C))(this, obj);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(EasyItemAnimScaleY*))(Il2CppBase() + 0x46F74F4))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(EasyItemAnimScaleY*))(Il2CppBase() + 0x46F760C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(EasyItemAnimScaleY*))(Il2CppBase() + 0x46F7720))(this);
	}
	template <typename T = void> T Prepare() {
		return ((T (*)(EasyItemAnimScaleY*))(Il2CppBase() + 0x46F783C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(EasyItemAnimScaleY*))(Il2CppBase() + 0x46F7950))(this);
	}

};

}
