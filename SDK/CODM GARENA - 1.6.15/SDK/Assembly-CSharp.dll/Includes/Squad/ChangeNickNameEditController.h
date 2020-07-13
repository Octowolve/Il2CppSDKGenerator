#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class ChangeNickNameEditController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "ChangeNickNameEditController"));
	}

	template <typename T = int32_t> static T& NICKNAME_RANDOM_LENGTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NICKNAME_RANDOM_GUEST_LENGTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& m_SocailNickName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_LoginInfo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_StartTick() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& navigationController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& cardData() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = char> static T& CHAR_VALIDATE_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& CHAR_VALIDATE_SPACE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& CHAR_VALIDATE_NEWLINE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> T& m_LastAddedChar() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AvailableHeadIconIdList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_PictureId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_FrameId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_index() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& NICKNAME_LENGTH_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NICKNAME_LENGTH_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOKButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEditNickName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNameLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEditNickNameRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerEditNickNameCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessServerEditNickNameMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEditNickNameFailMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x4319D88))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x4319E2C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x4319ECC))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431A320))(this);
	}
	template <typename T = char> T OnValidate(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((T (*)(ChangeNickNameEditController*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x431A3F0))(this, text, charIndex, addedChar);
	}
	template <typename T = void> T OnChange() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431A5A8))(this);
	}
	template <typename T = void> T PrepareViews() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x4319FF0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431A8BC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431ACCC))(this);
	}
	template <typename T = void> T OnOKButtonClick() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431AEF0))(this);
	}
	template <typename T = void> T DoEditNickName(uintptr_t result, int32_t userContext) {
		return ((T (*)(ChangeNickNameEditController*, uintptr_t, int32_t))(Il2CppBase() + 0x431B144))(this, result, userContext);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431B6C0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431B774))(this);
	}
	template <typename T = void> T OnInputFocus() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431B80C))(this);
	}
	template <typename T = bool> T CheckNameLength(Il2CppString* name, bool lastCheck) {
		return ((T (*)(ChangeNickNameEditController*, Il2CppString*, bool))(Il2CppBase() + 0x431B8A4))(this, name, lastCheck);
	}
	template <typename T = void> T DoEditNickNameRequest(Il2CppString* nickName, int32_t picId, int32_t frameId) {
		return ((T (*)(ChangeNickNameEditController*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x431B240))(this, nickName, picId, frameId);
	}
	template <typename T = void> T OnServerEditNickNameCallback(uintptr_t Msg) {
		return ((T (*)(ChangeNickNameEditController*, uintptr_t))(Il2CppBase() + 0x431BDB4))(this, Msg);
	}
	template <typename T = void> T ProcessServerEditNickNameMessageBox(uintptr_t data) {
		return ((T (*)(ChangeNickNameEditController*, uintptr_t))(Il2CppBase() + 0x431C168))(this, data);
	}
	template <typename T = void> T OnEditNickNameFailMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(ChangeNickNameEditController*, uintptr_t, int32_t))(Il2CppBase() + 0x431C700))(this, result, userContext);
	}
	template <typename T = void> T ReportEvent(int32_t errorCode, Il2CppString* nickName) {
		return ((T (*)(ChangeNickNameEditController*, int32_t, Il2CppString*))(Il2CppBase() + 0x431C4C0))(this, errorCode, nickName);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431C87C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431C884))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431C88C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431C894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431C89C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431C8A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ChangeNickNameEditController*))(Il2CppBase() + 0x431C8AC))(this);
	}

};

}
