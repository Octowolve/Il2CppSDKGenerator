#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tween {

class TweenAnimationManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tween", "TweenAnimationManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppDictionary<uintptr_t, void*>*>*> T& Dic() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& CurrGroupState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweenGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Register(uintptr_t player, int32_t groupId, int32_t contex) {
		return ((T (*)(TweenAnimationManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x424CD14))(this, player, groupId, contex);
	}
	template <typename T = void> T Register_1(uintptr_t player, void* groupId, int32_t contex) {
		return ((T (*)(TweenAnimationManager*, uintptr_t, void*, int32_t))(Il2CppBase() + 0x424D3D0))(this, player, groupId, contex);
	}
	template <typename T = void> T UnRegister(uintptr_t player, int32_t groupId, int32_t contex) {
		return ((T (*)(TweenAnimationManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x424D8CC))(this, player, groupId, contex);
	}
	template <typename T = void> T UnRegister_1(uintptr_t player, void* groupId, int32_t contex) {
		return ((T (*)(TweenAnimationManager*, uintptr_t, void*, int32_t))(Il2CppBase() + 0x424DDEC))(this, player, groupId, contex);
	}
	template <typename T = void> T PlayTweenGroup(int32_t groupId, int32_t contex) {
		return ((T (*)(TweenAnimationManager*, int32_t, int32_t))(Il2CppBase() + 0x424E30C))(this, groupId, contex);
	}

};

}
