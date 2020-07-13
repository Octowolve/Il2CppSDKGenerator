#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class NickNameEditController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "NickNameEditController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_LoadingFlowController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_LoginInfo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_StartTick() {
		return *(T*)((uintptr_t)this + 0x54);
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
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AvailableHeadIconIdList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_PictureId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_FrameId() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_index() {
		return *(T*)((uintptr_t)this + 0x68);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterInputLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isChineseChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTextLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExceedLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareCNView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareWestView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHeadIconInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomRangeIconInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHeadIconSocial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOKButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeHeadIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeRdmNickNameBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshHeadIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUnlockedHeadIcons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallbackToLoadingFlowControllerFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallbackToLoadingFlowControllerProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNameLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareRegisterReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEditNickNameRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerEditNickNameCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessServerEditNickNameMessageBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEditNickNameFailMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> T get_LoginInfo() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x2527650))(this);
	}
	template <typename T = uintptr_t> T get_LoadingFlowController() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x2527700))(this);
	}
	template <typename T = void> T set_LoadingFlowController(uintptr_t value) {
		return ((T (*)(NickNameEditController*, uintptr_t))(Il2CppBase() + 0x2527708))(this, value);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x2527710))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x25277B4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x2527854))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x2527970))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x25280E0))(this);
	}
	template <typename T = void> T RegisterInputLabel(bool register_) {
		return ((T (*)(NickNameEditController*, bool))(Il2CppBase() + 0x2527C94))(this, register_);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x2528320))(this);
	}
	template <typename T = bool> T isChineseChar(char c) {
		return ((T (*)(NickNameEditController*, char))(Il2CppBase() + 0x25285F8))(this, c);
	}
	template <typename T = int32_t> T Count(Il2CppString* str) {
		return ((T (*)(NickNameEditController*, Il2CppString*))(Il2CppBase() + 0x25286B4))(this, str);
	}
	template <typename T = char> T OnValidate(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((T (*)(NickNameEditController*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x25287B4))(this, text, charIndex, addedChar);
	}
	template <typename T = void> T OnSubmit() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252896C))(this);
	}
	template <typename T = void> T CheckTextLength() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x2528A10))(this);
	}
	template <typename T = bool> T IsExceedLength(Il2CppString* text) {
		return ((T (*)(NickNameEditController*, Il2CppString*))(Il2CppBase() + 0x2528C10))(this, text);
	}
	template <typename T = void> T OnChange() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x2528D40))(this);
	}
	template <typename T = void> T PrepareViews() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x25283D0))(this);
	}
	template <typename T = void> T PrepareCNView() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x2529070))(this);
	}
	template <typename T = void> T PrepareWestView() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x25295F0))(this);
	}
	template <typename T = void> T SetHeadIconInGame() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252A238))(this);
	}
	template <typename T = void> T RandomRangeIconInGame() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252A448))(this);
	}
	template <typename T = void> T SetHeadIconSocial(bool canChangeHead) {
		return ((T (*)(NickNameEditController*, bool))(Il2CppBase() + 0x2529FBC))(this, canChangeHead);
	}
	template <typename T = void> T OnOKButtonClick() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252A790))(this);
	}
	template <typename T = void> T OnChangeHeadIconClick() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252AC40))(this);
	}
	template <typename T = void> T OnChangeRdmNickNameBtnClick() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252AF04))(this);
	}
	template <typename T = void> T RefreshHeadIcon() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252ACE4))(this);
	}
	template <typename T = void> T CheckUnlockedHeadIcons() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252A39C))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252B128))(this);
	}
	template <typename T = void> T CallbackToLoadingFlowControllerFinish(uintptr_t result) {
		return ((T (*)(NickNameEditController*, uintptr_t))(Il2CppBase() + 0x2528F3C))(this, result);
	}
	template <typename T = void> T CallbackToLoadingFlowControllerProgress(Il2CppString* tips, float progress) {
		return ((T (*)(NickNameEditController*, Il2CppString*, float))(Il2CppBase() + 0x252B2A8))(this, tips, progress);
	}
	template <typename T = bool> T CheckNameLength(Il2CppString* name, bool lastCheck) {
		return ((T (*)(NickNameEditController*, Il2CppString*, bool))(Il2CppBase() + 0x2529AAC))(this, name, lastCheck);
	}
	template <typename T = void> T PrepareRegisterReq(uintptr_t pkg, Il2CppString* nickName, int32_t picId, int32_t frameId) {
		return ((T (*)(NickNameEditController*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x252B3F8))(this, pkg, nickName, picId, frameId);
	}
	template <typename T = void> T DoEditNickNameRequest(Il2CppString* nickName, int32_t picId, int32_t frameId) {
		return ((T (*)(NickNameEditController*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x252A884))(this, nickName, picId, frameId);
	}
	template <typename T = void> T OnServerEditNickNameCallback(uintptr_t Msg) {
		return ((T (*)(NickNameEditController*, uintptr_t))(Il2CppBase() + 0x252BE24))(this, Msg);
	}
	template <typename T = void> T ProcessServerEditNickNameMessageBox(uintptr_t data) {
		return ((T (*)(NickNameEditController*, uintptr_t))(Il2CppBase() + 0x252C228))(this, data);
	}
	template <typename T = void> T OnEditNickNameFailMessageBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(NickNameEditController*, uintptr_t, int32_t))(Il2CppBase() + 0x252C78C))(this, result, userContext);
	}
	template <typename T = void> T ReportEvent(int32_t errorCode, Il2CppString* nickName) {
		return ((T (*)(NickNameEditController*, int32_t, Il2CppString*))(Il2CppBase() + 0x252C54C))(this, errorCode, nickName);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252C840))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252C848))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252C850))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252C858))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252C860))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(NickNameEditController*))(Il2CppBase() + 0x252C868))(this);
	}

};

}
