#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TicketPopupList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TicketPopupList"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Grid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OpenTrigger() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Bg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PendingTemplate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OtherArea() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_CurrentIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& ITEM_HIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OptionList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uint32_t>*> T& ticketIdList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& clickSound() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& onSelectChange() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInitData() {
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

	template <typename T = void> T SetCurrentIndex(int32_t index) {
		return ((T (*)(TicketPopupList*, int32_t))(Il2CppBase() + 0x29B72A0))(this, index);
	}
	template <typename T = int32_t> T GetCurrentIndex() {
		return ((T (*)(TicketPopupList*))(Il2CppBase() + 0x29B7378))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TicketPopupList*))(Il2CppBase() + 0x29B7448))(this);
	}
	template <typename T = void> T SetInitData(Il2CppList<uint32_t>* ticketData, int32_t defaultIndex) {
		return ((T (*)(TicketPopupList*, Il2CppList<uint32_t>*, int32_t))(Il2CppBase() + 0x29B75F8))(this, ticketData, defaultIndex);
	}
	template <typename T = void> T OnShowPending(uintptr_t obj) {
		return ((T (*)(TicketPopupList*, uintptr_t))(Il2CppBase() + 0x29B7C48))(this, obj);
	}
	template <typename T = void> T OnClosePending(uintptr_t obj) {
		return ((T (*)(TicketPopupList*, uintptr_t))(Il2CppBase() + 0x29B7EA8))(this, obj);
	}
	template <typename T = void> T OnClickItem(int32_t index) {
		return ((T (*)(TicketPopupList*, int32_t))(Il2CppBase() + 0x29B8054))(this, index);
	}

};

}
