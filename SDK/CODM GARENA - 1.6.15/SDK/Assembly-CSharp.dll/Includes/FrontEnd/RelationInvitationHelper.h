#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class RelationInvitationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "RelationInvitationHelper"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& mini_program_type() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& EnableEncodeToJPG() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& f__am$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> static T& f__am$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& f__am$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = void*> static T& f__am$cacheC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& f__am$cacheD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = void*> static T& f__am$cacheE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& f__am$cacheF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = void*> static T& f__am$cache10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& f__am$cache11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelationInvitationSendSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoinTeamParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JoinTeamOnWakeUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedToJoinTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareArkExtraJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitation_ShareArk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitation_SilentShareArk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SilentShareArk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamArkExtraJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GeyMiniAppExtraJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMiniAppMediaPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitation_TeamArk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitation_MiniApp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitation_Normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelationInvitation_BlankJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelationInvitationQQ_NormalJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelationInvitationWeChat_NormalJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelationInvitationWeChat_NormalJson_ToGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQQCenterGameData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeChatCenterGameData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitationQQ_Normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitationWeChat_Normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitation_Silent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelationInvitationQQ_SilentJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationInvitationQQ_Silent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendInvitationResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleShareArkRet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInvitationValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInvitationDataConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInvitationDataSpecail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendExpCardInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendLuckyBagInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendScreenCaptureInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendOffLineInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendTeamInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendArkInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendMiniAppInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendInvitationImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSupportSlient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendImgImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendStructureImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendStructureSilentImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendStructureToGameImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendStructureSilentToGameImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendStructureImplToRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendStructureSilentImplToRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUrlPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendTeamArkImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendSilentArkImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendSilentArkToGameImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendSilentArkToRoomImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SendTeamMiniAppImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamRelationInvitationType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTriggerBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendExpCardSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpecialMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGoldBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SpecialMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInSendFriendList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveScreenShotToJPG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQQZoneImgParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QQZoneShareImgTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TeamRelationTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}

	template <typename T = uintptr_t> T get_rids() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x38447F4))(this);
	}
	template <typename T = uintptr_t> T get_rds() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x3844890))(this);
	}
	template <typename T = uintptr_t> T get_lpds() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384492C))(this);
	}
	template <typename T = uintptr_t> T get_lpi() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x38449C8))(this);
	}
	template <typename T = void> T OnRelationInvitationSendSuccess(uintptr_t result) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x3844A64))(this, result);
	}
	template <typename T = Il2CppString*> T GetJoinTeamParameters() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x3845738))(this);
	}
	template <typename T = void> T JoinTeamOnWakeUp(Il2CppString* parameters) {
		return ((T (*)(RelationInvitationHelper*, Il2CppString*))(Il2CppBase() + 0x3845964))(this, parameters);
	}
	template <typename T = void> T CheckNeedToJoinTeam() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384655C))(this);
	}
	template <typename T = Il2CppString*> T GetShareArkExtraJson() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384676C))(this);
	}
	template <typename T = void> T SendRelationInvitation_ShareArk() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x3846E78))(this);
	}
	template <typename T = void> T SendRelationInvitation_SilentShareArk(uintptr_t invitationData, Il2CppString* targetUrl, Il2CppString* urlPrefix) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x384719C))(this, invitationData, targetUrl, urlPrefix);
	}
	template <typename T = uintptr_t> T SilentShareArk(uintptr_t webRequest) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x3847C34))(this, webRequest);
	}
	template <typename T = Il2CppString*> T GetTeamArkExtraJson() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x3847D58))(this);
	}
	template <typename T = Il2CppString*> T GeyMiniAppExtraJson(int32_t UseJson) {
		return ((T (*)(RelationInvitationHelper*, int32_t))(Il2CppBase() + 0x38487E8))(this, UseJson);
	}
	template <typename T = Il2CppString*> T GetMiniAppMediaPath(uintptr_t path) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x3849FD8))(this, path);
	}
	template <typename T = void> T SendRelationInvitation() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384A7B4))(this);
	}
	template <typename T = void> T SendRelationInvitation_TeamArk() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384AA00))(this);
	}
	template <typename T = void> T SendRelationInvitation_MiniApp(int32_t UseJson) {
		return ((T (*)(RelationInvitationHelper*, int32_t))(Il2CppBase() + 0x384AD24))(this, UseJson);
	}
	template <typename T = void> T SendRelationInvitation_Normal() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384B0DC))(this);
	}
	template <typename T = Il2CppString*> T GetRelationInvitation_BlankJson() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384BA40))(this);
	}
	template <typename T = Il2CppString*> T GetRelationInvitationQQ_NormalJson() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384BBE0))(this);
	}
	template <typename T = Il2CppString*> T GetRelationInvitationWeChat_NormalJson() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384BD3C))(this);
	}
	template <typename T = Il2CppString*> T GetRelationInvitationWeChat_NormalJson_ToGame() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384BE98))(this);
	}
	template <typename T = Il2CppString*> T GetQQCenterGameData() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384BF80))(this);
	}
	template <typename T = Il2CppString*> T GetWeChatCenterGameData() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384C5DC))(this);
	}
	template <typename T = void> T SendRelationInvitationQQ_Normal() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384B324))(this);
	}
	template <typename T = void> T SendRelationInvitationWeChat_Normal() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384B6B4))(this);
	}
	template <typename T = void> T SendRelationInvitation_Silent(Il2CppString* openID) {
		return ((T (*)(RelationInvitationHelper*, Il2CppString*))(Il2CppBase() + 0x384C6C4))(this, openID);
	}
	template <typename T = Il2CppString*> T GetRelationInvitationQQ_SilentJson() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384CC8C))(this);
	}
	template <typename T = void> T SendRelationInvitationQQ_Silent(Il2CppString* openID) {
		return ((T (*)(RelationInvitationHelper*, Il2CppString*))(Il2CppBase() + 0x384C904))(this, openID);
	}
	template <typename T = uintptr_t> T get_m_pf() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384A680))(this);
	}
	template <typename T = uintptr_t> T GetShareTarget() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384CDE8))(this);
	}
	template <typename T = void> T SendInvitation(uintptr_t InvitationType, Il2CppString* openID, uintptr_t texture, uintptr_t shareTarget) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x384CEC8))(this, InvitationType, openID, texture, shareTarget);
	}
	template <typename T = void> T OnSendInvitationResponse(uintptr_t result, uintptr_t shareArkRet) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3844B48))(this, result, shareArkRet);
	}
	template <typename T = void> T HandleShareArkRet(uintptr_t shareArkRet) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384D864))(this, shareArkRet);
	}
	template <typename T = bool> T IsInvitationValid() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x384D100))(this);
	}
	template <typename T = void> T GetInvitationDataConfig(uintptr_t data, uintptr_t RelationType) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x384DC2C))(this, data, RelationType);
	}
	template <typename T = void> T GetInvitationDataSpecail(uintptr_t data, uintptr_t RelationType) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x384DD10))(this, data, RelationType);
	}
	template <typename T = void> T _SendExpCardInvitation(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384D1D4))(this, data);
	}
	template <typename T = void> T _SendLuckyBagInvitation(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384D2C4))(this, data);
	}
	template <typename T = void> T _SendScreenCaptureInvitation(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384D3B4))(this, data);
	}
	template <typename T = void> T _SendOffLineInvitation(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384D4A4))(this, data);
	}
	template <typename T = void> T _SendTeamInvitation(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384D594))(this, data);
	}
	template <typename T = void> T _SendArkInvitation(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384D684))(this, data);
	}
	template <typename T = void> T _SendMiniAppInvitation(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384D774))(this, data);
	}
	template <typename T = void> T _SendInvitationImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384DE24))(this, data);
	}
	template <typename T = bool> T IsSupportSlient() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x38508CC))(this);
	}
	template <typename T = void> T _SendImgImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384E014))(this, data);
	}
	template <typename T = void> T _SendStructureImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384E28C))(this, data);
	}
	template <typename T = void> T _SendStructureSilentImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384E7F8))(this, data);
	}
	template <typename T = void> T _SendStructureToGameImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384EB54))(this, data);
	}
	template <typename T = void> T _SendStructureSilentToGameImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384F128))(this, data);
	}
	template <typename T = void> T _SendStructureImplToRoom(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384F4E0))(this, data);
	}
	template <typename T = void> T _SendStructureSilentImplToRoom(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384FAA8))(this, data);
	}
	template <typename T = Il2CppString*> T GetUrlPrefix() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x38509AC))(this);
	}
	template <typename T = void> T _SendTeamArkImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x384FE5C))(this, data);
	}
	template <typename T = void> T _SendSilentArkImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x3850154))(this, data);
	}
	template <typename T = void> T _SendSilentArkToGameImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x3850268))(this, data);
	}
	template <typename T = void> T _SendSilentArkToRoomImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x38503B8))(this, data);
	}
	template <typename T = void> T _SendTeamMiniAppImpl(uintptr_t data) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x3850564))(this, data);
	}
	template <typename T = uintptr_t> T GetTeamRelationInvitationType() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x3850B60))(this);
	}
	template <typename T = void> T ShowTriggerBag() {
		return ((T (*)(RelationInvitationHelper*))(Il2CppBase() + 0x3850D14))(this);
	}
	template <typename T = void> T SendExpCardSuccess(uint64_t PlayerID) {
		return ((T (*)(RelationInvitationHelper*, uint64_t))(Il2CppBase() + 0x3850F50))(this, PlayerID);
	}
	template <typename T = void> T SpecialMail(Il2CppList<uintptr_t>* MailList) {
		return ((T (*)(RelationInvitationHelper*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x38367AC))(this, MailList);
	}
	template <typename T = void> T SendGoldBack(uint64_t PlayerID) {
		return ((T (*)(RelationInvitationHelper*, uint64_t))(Il2CppBase() + 0x3851F0C))(this, PlayerID);
	}
	template <typename T = void> T _SpecialMail(uintptr_t mailData, int32_t context) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t, int32_t))(Il2CppBase() + 0x3851618))(this, mailData, context);
	}
	template <typename T = bool> T IsInSendFriendList(uint64_t PlayerID) {
		return ((T (*)(RelationInvitationHelper*, uint64_t))(Il2CppBase() + 0x38521E8))(this, PlayerID);
	}
	template <typename T = Il2CppString*> T SaveScreenShotToJPG(uintptr_t texture, uintptr_t shareTarget, bool deleteOldFile) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3852404))(this, texture, shareTarget, deleteOldFile);
	}
	template <typename T = void> T GetQQZoneImgParams(uintptr_t Title, uintptr_t Desc) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x385293C))(this, Title, Desc);
	}
	template <typename T = void> T QQZoneShareImgTLog(uintptr_t result) {
		return ((T (*)(RelationInvitationHelper*, uintptr_t))(Il2CppBase() + 0x3852A20))(this, result);
	}
	template <typename T = void> T TeamRelationTLog(int32_t Source, int32_t Type) {
		return ((T (*)(RelationInvitationHelper*, int32_t, int32_t))(Il2CppBase() + 0x38460CC))(this, Source, Type);
	}
	template <typename T = void> static T SendRelationInvitation_ShareArkm__0(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852CE0))(0, b);
	}
	template <typename T = void> static T SendRelationInvitation_TeamArkm__1(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852CE4))(0, b);
	}
	template <typename T = void> static T SendRelationInvitation_MiniAppm__2(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852CE8))(0, b);
	}
	template <typename T = void> static T SendRelationInvitationQQ_Normalm__3(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852CEC))(0, b);
	}
	template <typename T = void> static T SendRelationInvitationWeChat_Normalm__4(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852CF0))(0, b);
	}
	template <typename T = void> static T SendRelationInvitationQQ_Silentm__5(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852CF4))(0, b);
	}
	template <typename T = void> static T _SendImgImplm__6(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852CF8))(0, b);
	}
	template <typename T = void> static T _SendStructureImplm__7(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852CFC))(0, b);
	}
	template <typename T = void> static T _SendStructureImplm__8(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D00))(0, b);
	}
	template <typename T = void> static T _SendStructureSilentImplm__9(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D04))(0, b);
	}
	template <typename T = void> static T _SendStructureToGameImplm__A(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D08))(0, b);
	}
	template <typename T = void> static T _SendStructureToGameImplm__B(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D0C))(0, b);
	}
	template <typename T = void> static T _SendStructureSilentToGameImplm__C(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D10))(0, b);
	}
	template <typename T = void> static T _SendStructureImplToRoomm__D(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D14))(0, b);
	}
	template <typename T = void> static T _SendStructureImplToRoomm__E(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D18))(0, b);
	}
	template <typename T = void> static T _SendStructureSilentImplToRoomm__F(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D1C))(0, b);
	}
	template <typename T = void> static T _SendTeamArkImplm__10(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D20))(0, b);
	}
	template <typename T = void> static T _SendTeamMiniAppImplm__11(bool b) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3852D24))(0, b);
	}

};

}
