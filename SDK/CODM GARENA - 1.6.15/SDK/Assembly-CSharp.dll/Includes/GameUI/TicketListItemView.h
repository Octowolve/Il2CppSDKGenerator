#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TicketListItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TicketListItemView"));
	}

	template <typename T = uintptr_t> T& TicketName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NoUseName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& GoTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GoPrice() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& PriceLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SelectedBg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SelectTicketName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SelectNoUseName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTicketListViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetTicketListViewData(uint32_t ticket_id, bool bSelect) {
		return ((T (*)(TicketListItemView*, uint32_t, bool))(Il2CppBase() + 0x29B6C68))(this, ticket_id, bSelect);
	}

};

}
