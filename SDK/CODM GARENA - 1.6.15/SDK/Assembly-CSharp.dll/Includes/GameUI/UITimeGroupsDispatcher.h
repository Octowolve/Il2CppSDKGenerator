#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITimeGroupsDispatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITimeGroupsDispatcher"));
	}

	template <typename T = uintptr_t> T& targetObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& timeGroupCatergories() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& autoSearchChildren() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& playTriggerMode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& clipRegion() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& invisibleGroups() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMissingDefaultCatergory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChildAnimationTimeGroups() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTimeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTimeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOwnerGroupsEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortByTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayTimeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UITimeGroupsDispatcher*))(Il2CppBase() + 0x3B18740))(this);
	}
	template <typename T = uintptr_t> T AddMissingDefaultCatergory() {
		return ((T (*)(UITimeGroupsDispatcher*))(Il2CppBase() + 0x3B18AA0))(this);
	}
	template <typename T = void> T GetChildAnimationTimeGroups(uintptr_t gObj, Il2CppList<uintptr_t>* outGroups) {
		return ((T (*)(UITimeGroupsDispatcher*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B18CF0))(this, gObj, outGroups);
	}
	template <typename T = bool> T IsInRect(uintptr_t clipRegon, Il2CppVector3 target) {
		return ((T (*)(UITimeGroupsDispatcher*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3B18F68))(this, clipRegon, target);
	}
	template <typename T = void> T RefreshTimeGroup() {
		return ((T (*)(UITimeGroupsDispatcher*))(Il2CppBase() + 0x3B19094))(this);
	}
	template <typename T = void> T ResetTimeGroup() {
		return ((T (*)(UITimeGroupsDispatcher*))(Il2CppBase() + 0x3B19F2C))(this);
	}
	template <typename T = void> T InvokeImpl(float fPlayOffset) {
		return ((T (*)(UITimeGroupsDispatcher*, float))(Il2CppBase() + 0x3B1A288))(this, fPlayOffset);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UITimeGroupsDispatcher*))(Il2CppBase() + 0x3B1A338))(this);
	}
	template <typename T = bool> T IsOwnerGroupsEmpty() {
		return ((T (*)(UITimeGroupsDispatcher*))(Il2CppBase() + 0x3B1A3F4))(this);
	}
	template <typename T = void> T OnRefresh() {
		return ((T (*)(UITimeGroupsDispatcher*))(Il2CppBase() + 0x3B1A608))(this);
	}
	template <typename T = int32_t> static T SortByTime(uintptr_t obj1, uintptr_t obj2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B1AB80))(0, obj1, obj2);
	}
	template <typename T = void> T OnPlayTimeGroup() {
		return ((T (*)(UITimeGroupsDispatcher*))(Il2CppBase() + 0x3B1AC4C))(this);
	}
	template <typename T = bool> static T AddMissingDefaultCatergorym__0(uintptr_t iter) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B1B6C8))(0, iter);
	}
	template <typename T = bool> static T GetChildAnimationTimeGroupsm__1(uintptr_t group) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B1B6F8))(0, group);
	}
	template <typename T = void> T xLuaBaseProxy_ResetTimeGroup() {
		return ((T (*)(UITimeGroupsDispatcher*))(Il2CppBase() + 0x3B1B724))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InvokeImpl(float P0) {
		return ((T (*)(UITimeGroupsDispatcher*, float))(Il2CppBase() + 0x3B1B728))(this, P0);
	}

};

}
