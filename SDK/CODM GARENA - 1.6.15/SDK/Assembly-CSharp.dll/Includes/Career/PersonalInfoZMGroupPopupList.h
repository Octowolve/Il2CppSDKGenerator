#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Career {

class PersonalInfoZMGroupPopupList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Career", "PersonalInfoZMGroupPopupList"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OpenTrigger() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ShowingLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PendingTemplate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OtherArea() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& cacheTypes() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ItemList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVEGroupString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClosePending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PersonalInfoZMGroupPopupList*))(Il2CppBase() + 0x5329438))(this);
	}
	template <typename T = Il2CppString*> static T GetPVEGroupString(int32_t groupId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x53295C0))(0, groupId);
	}
	template <typename T = void> T SetPVEOptions() {
		return ((T (*)(PersonalInfoZMGroupPopupList*))(Il2CppBase() + 0x53296F8))(this);
	}
	template <typename T = void> T InitPendingItems(uintptr_t grid) {
		return ((T (*)(PersonalInfoZMGroupPopupList*, uintptr_t))(Il2CppBase() + 0x5329908))(this, grid);
	}
	template <typename T = void> T RefreshContent() {
		return ((T (*)(PersonalInfoZMGroupPopupList*))(Il2CppBase() + 0x532A038))(this);
	}
	template <typename T = void> T OnShowPending(uintptr_t obj) {
		return ((T (*)(PersonalInfoZMGroupPopupList*, uintptr_t))(Il2CppBase() + 0x532A1E4))(this, obj);
	}
	template <typename T = void> T OnClosePending(uintptr_t obj) {
		return ((T (*)(PersonalInfoZMGroupPopupList*, uintptr_t))(Il2CppBase() + 0x532A2C4))(this, obj);
	}
	template <typename T = void> T OnClickItem(int32_t groupId) {
		return ((T (*)(PersonalInfoZMGroupPopupList*, int32_t))(Il2CppBase() + 0x5329E68))(this, groupId);
	}

};

}
