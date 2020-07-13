#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIReactionBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIReactionBase"));
	}

	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SubscribeChannelTypes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopulateSubscribeChannelTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SuppressAllReactions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnsuppressAllReactions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t aiController) {
		return ((T (*)(AIReactionBase*, uintptr_t))(Il2CppBase() + 0x49B4000))(this, aiController);
	}
	template <typename T = void> T PopulateSubscribeChannelTypes() {
		return ((T (*)(AIReactionBase*))(Il2CppBase() + 0x49B44AC))(this);
	}
	template <typename T = void> T Activate(uint32_t eventInstigatorID, uintptr_t originatingChannel) {
		return ((T (*)(AIReactionBase*, uint32_t, uintptr_t))(Il2CppBase() + 0x49B3DBC))(this, eventInstigatorID, originatingChannel);
	}
	template <typename T = bool> T ShouldActivate(uint32_t eventInstigatorID, uintptr_t originatingChannel) {
		return ((T (*)(AIReactionBase*, uint32_t, uintptr_t))(Il2CppBase() + 0x49B4544))(this, eventInstigatorID, originatingChannel);
	}
	template <typename T = void> T SuppressAllReactions() {
		return ((T (*)(AIReactionBase*))(Il2CppBase() + 0x49B4604))(this);
	}
	template <typename T = void> T UnsuppressAllReactions() {
		return ((T (*)(AIReactionBase*))(Il2CppBase() + 0x49B469C))(this);
	}

};

}
