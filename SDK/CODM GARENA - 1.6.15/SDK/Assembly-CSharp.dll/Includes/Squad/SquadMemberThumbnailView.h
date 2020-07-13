#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadMemberThumbnailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadMemberThumbnailView"));
	}

	template <typename T = uintptr_t> T& SmallSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& QualityLine() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& kSPIColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& kNameColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SquadMemberThumbnailView*))(Il2CppBase() + 0x39458A0))(this);
	}
	template <typename T = void> T BindData(uintptr_t data, bool isZombieStyle) {
		return ((T (*)(SquadMemberThumbnailView*, uintptr_t, bool))(Il2CppBase() + 0x3945B98))(this, data, isZombieStyle);
	}

};

}
