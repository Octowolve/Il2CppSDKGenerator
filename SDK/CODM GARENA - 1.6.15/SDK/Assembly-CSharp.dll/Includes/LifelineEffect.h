#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LifelineEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LifelineEffect"));
	}

	template <typename T = uintptr_t> T& Master() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Follower() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LineRendererList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_Master() {
		return ((T (*)(LifelineEffect*))(Il2CppBase() + 0x4933770))(this);
	}
	template <typename T = void> T set_Master(uintptr_t value) {
		return ((T (*)(LifelineEffect*, uintptr_t))(Il2CppBase() + 0x4933778))(this, value);
	}
	template <typename T = uintptr_t> T get_Follower() {
		return ((T (*)(LifelineEffect*))(Il2CppBase() + 0x4933780))(this);
	}
	template <typename T = void> T set_Follower(uintptr_t value) {
		return ((T (*)(LifelineEffect*, uintptr_t))(Il2CppBase() + 0x4933788))(this, value);
	}
	template <typename T = void> T Init(uintptr_t master, uintptr_t follower) {
		return ((T (*)(LifelineEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4933790))(this, master, follower);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LifelineEffect*, float))(Il2CppBase() + 0x4933B04))(this, deltaTime);
	}
	template <typename T = void> T UpdatePos() {
		return ((T (*)(LifelineEffect*))(Il2CppBase() + 0x493385C))(this);
	}

};

}
