#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailDetailView"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SenderName() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Time() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& propsList() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& AccemptBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& DeleteBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& GoBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& MailAttachmentScrollView() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& grid() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& curMailData() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& LeftBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& RightBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& isStartDrug() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& mScrollViewPostion() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& MailContent_ScrollView() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& MailContent_ScrollBar() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& Max_SrollBar_Height() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppVector3> T& bigGridPostion() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMailContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_refreshBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_refreshBtnStateAfterClickGo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScrollViewBtnActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetMailContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(MailDetailView*))(Il2CppBase() + 0x36BF288))(this);
	}
	template <typename T = void> T SetMailContent(uintptr_t data, Il2CppList<uintptr_t>* list, bool isWeasponExpire) {
		return ((T (*)(MailDetailView*, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x36BEB68))(this, data, list, isWeasponExpire);
	}
	template <typename T = void> T SetCell(Il2CppList<uintptr_t>* dataList, int32_t mailStatus, bool bReadFlag, bool isWeasponExpire) {
		return ((T (*)(MailDetailView*, Il2CppList<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0x36BF9E8))(this, dataList, mailStatus, bReadFlag, isWeasponExpire);
	}
	template <typename T = void> T refreshBtnState(uintptr_t data) {
		return ((T (*)(MailDetailView*, uintptr_t))(Il2CppBase() + 0x36BF328))(this, data);
	}
	template <typename T = void> T refreshBtnStateAfterClickGo(uintptr_t data) {
		return ((T (*)(MailDetailView*, uintptr_t))(Il2CppBase() + 0x36BE984))(this, data);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(MailDetailView*))(Il2CppBase() + 0x36C01C8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(MailDetailView*, float))(Il2CppBase() + 0x36C01D0))(this, dt);
	}
	template <typename T = void> T SetScrollViewBtnActive(bool isLeft, bool isRight) {
		return ((T (*)(MailDetailView*, bool, bool))(Il2CppBase() + 0x36BFFCC))(this, isLeft, isRight);
	}
	template <typename T = void> T SetMailContent_1(uintptr_t data) {
		return ((T (*)(MailDetailView*, uintptr_t))(Il2CppBase() + 0x36BF640))(this, data);
	}
	template <typename T = bool> static T SetMailContentm__0(uintptr_t MailAttachData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36C0330))(0, MailAttachData);
	}
	template <typename T = bool> static T SetMailContentm__1(uintptr_t MailAttachData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36C0448))(0, MailAttachData);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(MailDetailView*))(Il2CppBase() + 0x36C0560))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MailDetailView*, float))(Il2CppBase() + 0x36C0568))(this, P0);
	}

};

}
