#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class ZmMpSettlementCardNewWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "ZmMpSettlementCardNewWindowView"));
	}

	template <typename T = uintptr_t> T& ObjTip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ObjCard() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelRemainTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CardList() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ButtonTemplateExit() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& bInit() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& bButtonShow() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = float> T& m_RemainTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = double> T& m_InitTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& CurrOpenNum() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& AfterRefreshCoin() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenCardFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(ZmMpSettlementCardNewWindowView*))(Il2CppBase() + 0x298AC50))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZmMpSettlementCardNewWindowView*))(Il2CppBase() + 0x298AD00))(this);
	}
	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* list) {
		return ((T (*)(ZmMpSettlementCardNewWindowView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x298A5E0))(this, list);
	}
	template <typename T = void> T OnOpenCardFinished() {
		return ((T (*)(ZmMpSettlementCardNewWindowView*))(Il2CppBase() + 0x298B154))(this);
	}
	template <typename T = void> T ShowBtn() {
		return ((T (*)(ZmMpSettlementCardNewWindowView*))(Il2CppBase() + 0x298B3A0))(this);
	}
	template <typename T = void> T InitToDefault() {
		return ((T (*)(ZmMpSettlementCardNewWindowView*))(Il2CppBase() + 0x298AFFC))(this);
	}
	template <typename T = void> T OnBtnExitClick() {
		return ((T (*)(ZmMpSettlementCardNewWindowView*))(Il2CppBase() + 0x298A930))(this);
	}

};

}
