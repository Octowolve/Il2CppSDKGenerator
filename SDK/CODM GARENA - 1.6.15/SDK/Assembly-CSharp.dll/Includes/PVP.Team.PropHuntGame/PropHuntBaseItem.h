#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntBaseItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntBaseItem"));
	}

	template <typename T = uint32_t> T& MaxHP() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& AliveScore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& DieEffectCenter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& BodyCollider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FireCollider() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ChildrenList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_CurType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePropItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToSceneItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToPropItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToCloneItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToSelfPropItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToOppositePropItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntBaseItem*))(Il2CppBase() + 0x3490C84))(this);
	}
	template <typename T = void> T UpdatePropItemType(uintptr_t type) {
		return ((T (*)(PropHuntBaseItem*, uintptr_t))(Il2CppBase() + 0x3490D8C))(this, type);
	}
	template <typename T = void> T ChangeToSceneItem() {
		return ((T (*)(PropHuntBaseItem*))(Il2CppBase() + 0x3490ED0))(this);
	}
	template <typename T = void> T ChangeToPropItem() {
		return ((T (*)(PropHuntBaseItem*))(Il2CppBase() + 0x3492374))(this);
	}
	template <typename T = void> T ChangeToCloneItem() {
		return ((T (*)(PropHuntBaseItem*))(Il2CppBase() + 0x3491398))(this);
	}
	template <typename T = void> T ChangeToSelfPropItem() {
		return ((T (*)(PropHuntBaseItem*))(Il2CppBase() + 0x3491A3C))(this);
	}
	template <typename T = void> T ChangeToOppositePropItem() {
		return ((T (*)(PropHuntBaseItem*))(Il2CppBase() + 0x3491EAC))(this);
	}

};

}
