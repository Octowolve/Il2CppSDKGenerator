#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tween {

class TweenPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tween", "TweenPlayer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& tweensGroupEnable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tweensGroupDisable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& EnableGroupID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Contex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& mGroupId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Enable() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshGroupSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroupEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroupDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweens2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T RefreshGroupSet() {
		return ((T (*)(TweenPlayer*))(Il2CppBase() + 0x424EA08))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TweenPlayer*))(Il2CppBase() + 0x424EAAC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TweenPlayer*))(Il2CppBase() + 0x424EC50))(this);
	}
	template <typename T = void> T OnGroupEnable() {
		return ((T (*)(TweenPlayer*))(Il2CppBase() + 0x424D1F4))(this);
	}
	template <typename T = void> T PlayTweens() {
		return ((T (*)(TweenPlayer*))(Il2CppBase() + 0x424ED70))(this);
	}
	template <typename T = void> T OnGroupDisable() {
		return ((T (*)(TweenPlayer*))(Il2CppBase() + 0x424E688))(this);
	}
	template <typename T = void> T PlayTweens2() {
		return ((T (*)(TweenPlayer*))(Il2CppBase() + 0x424EEE4))(this);
	}

};

}
