#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailDetailController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& CurShowMailData() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& scrollViewOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNormalScrollViewStartDrug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNormalScrollViewEndDrug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDrugEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDrugStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickGetAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BD958))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BD9FC))(this);
	}
	template <typename T = void> T OnNormalScrollViewStartDrug() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BDC6C))(this);
	}
	template <typename T = void> T OnNormalScrollViewEndDrug() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BDD38))(this);
	}
	template <typename T = void> T OnScrollViewDrugEnd() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BDDF0))(this);
	}
	template <typename T = void> T OnScrollViewDrugStart() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BDEBC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BDF84))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BE2C0))(this);
	}
	template <typename T = void> T OnClickGetAttach() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BE55C))(this);
	}
	template <typename T = void> T OnClickDelete() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BE6A4))(this);
	}
	template <typename T = void> T OnGoBtnClick() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BE7D4))(this);
	}
	template <typename T = void> T SetData(uintptr_t data, Il2CppList<uintptr_t>* list, bool isWeasponExpire) {
		return ((T (*)(MailDetailController*, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x36B95FC))(this, data, list, isWeasponExpire);
	}
	template <typename T = void> T OnRightBtnClick() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BEF1C))(this);
	}
	template <typename T = void> T OnLeftBtnClick() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BEFE4))(this);
	}
	template <typename T = bool> T OnReturnKeyPressed() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BF0B0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BF170))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BF178))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BF180))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BF188))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPressed() {
		return ((T (*)(MailDetailController*))(Il2CppBase() + 0x36BF190))(this);
	}

};

}
