#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SPVPPlaylistExtConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SPVPPlaylistExtConfConfig"));
	}

	template <typename T = int32_t> T& MatchType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PlaylistType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PlaylistTypeDis() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PlaylistTypeLocID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PlaylistID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& Area_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& NumOfInvite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& NumofPlayer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& PlaylistName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& PlaylistLocID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& PlaylistDisLocID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& PlaylistPlayerNumDisLocID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Bool_Child() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& LevelUnlock() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& LadderUnlock() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& OpenType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ShowPirority() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& Cd_active_second() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& Cool_down_second() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& ShowType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& ShowStartTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& ShowEndTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& LOCOpenTimeDesc() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& KeyModeType() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& EXBuffValue() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& RankScoreBuffValue() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& PlaylistImageResource() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& PlaylistImageResourceCDN() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& TagResource() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& TagLocID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& BubblePriority() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& BubbleCondition() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& BubbleType() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& BubbleLocID() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& Score_limit_default() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& Score_limit_lower() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& Score_limit_upper() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& Time_limit_default() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& Time_limit_lower() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& Time_limit_upper() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond1Desc1() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond1Desc2() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond2Desc1() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& LOCID_Cond2Desc2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& DetailType() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_MatchType() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAB94))(this);
	}
	template <typename T = void> T set_MatchType(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAB9C))(this, value);
	}
	template <typename T = int32_t> T get_PlaylistType() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EABA4))(this);
	}
	template <typename T = void> T set_PlaylistType(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EABAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistTypeDis() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EABB4))(this);
	}
	template <typename T = void> T set_PlaylistTypeDis(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EABBC))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistTypeLocID() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EABC4))(this);
	}
	template <typename T = void> T set_PlaylistTypeLocID(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EABCC))(this, value);
	}
	template <typename T = int32_t> T get_PlaylistID() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EABD4))(this);
	}
	template <typename T = void> T set_PlaylistID(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EABDC))(this, value);
	}
	template <typename T = uint32_t> T get_Area_id() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EABE4))(this);
	}
	template <typename T = void> T set_Area_id(uint32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, uint32_t))(Il2CppBase() + 0x30EABEC))(this, value);
	}
	template <typename T = int32_t> T get_NumOfInvite() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EABF4))(this);
	}
	template <typename T = void> T set_NumOfInvite(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EABFC))(this, value);
	}
	template <typename T = int32_t> T get_NumofPlayer() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC04))(this);
	}
	template <typename T = void> T set_NumofPlayer(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAC0C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistName() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC14))(this);
	}
	template <typename T = void> T set_PlaylistName(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAC1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistLocID() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC24))(this);
	}
	template <typename T = void> T set_PlaylistLocID(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAC2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistDisLocID() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC34))(this);
	}
	template <typename T = void> T set_PlaylistDisLocID(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAC3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistPlayerNumDisLocID() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC44))(this);
	}
	template <typename T = void> T set_PlaylistPlayerNumDisLocID(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAC4C))(this, value);
	}
	template <typename T = int32_t> T get_Bool_Child() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC54))(this);
	}
	template <typename T = void> T set_Bool_Child(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAC5C))(this, value);
	}
	template <typename T = int32_t> T get_LevelUnlock() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC64))(this);
	}
	template <typename T = void> T set_LevelUnlock(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAC6C))(this, value);
	}
	template <typename T = int32_t> T get_LadderUnlock() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC74))(this);
	}
	template <typename T = void> T set_LadderUnlock(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAC7C))(this, value);
	}
	template <typename T = int32_t> T get_OpenType() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC84))(this);
	}
	template <typename T = void> T set_OpenType(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAC8C))(this, value);
	}
	template <typename T = int32_t> T get_ShowPirority() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAC94))(this);
	}
	template <typename T = void> T set_ShowPirority(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAC9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_StartTime() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EACA4))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EACAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EACB4))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EACBC))(this, value);
	}
	template <typename T = uint32_t> T get_Cd_active_second() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EACC4))(this);
	}
	template <typename T = void> T set_Cd_active_second(uint32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, uint32_t))(Il2CppBase() + 0x30EACCC))(this, value);
	}
	template <typename T = uint32_t> T get_Cool_down_second() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EACD4))(this);
	}
	template <typename T = void> T set_Cool_down_second(uint32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, uint32_t))(Il2CppBase() + 0x30EACDC))(this, value);
	}
	template <typename T = int32_t> T get_ShowType() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EACE4))(this);
	}
	template <typename T = void> T set_ShowType(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EACEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShowStartTime() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EACF4))(this);
	}
	template <typename T = void> T set_ShowStartTime(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EACFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShowEndTime() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD04))(this);
	}
	template <typename T = void> T set_ShowEndTime(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAD0C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCOpenTimeDesc() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD14))(this);
	}
	template <typename T = void> T set_LOCOpenTimeDesc(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAD1C))(this, value);
	}
	template <typename T = int32_t> T get_KeyModeType() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD24))(this);
	}
	template <typename T = void> T set_KeyModeType(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAD2C))(this, value);
	}
	template <typename T = float> T get_EXBuffValue() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD34))(this);
	}
	template <typename T = void> T set_EXBuffValue(float value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, float))(Il2CppBase() + 0x30EAD3C))(this, value);
	}
	template <typename T = float> T get_RankScoreBuffValue() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD44))(this);
	}
	template <typename T = void> T set_RankScoreBuffValue(float value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, float))(Il2CppBase() + 0x30EAD4C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistImageResource() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD54))(this);
	}
	template <typename T = void> T set_PlaylistImageResource(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAD5C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistImageResourceCDN() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD64))(this);
	}
	template <typename T = void> T set_PlaylistImageResourceCDN(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAD6C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TagResource() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD74))(this);
	}
	template <typename T = void> T set_TagResource(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAD7C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TagLocID() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD84))(this);
	}
	template <typename T = void> T set_TagLocID(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAD8C))(this, value);
	}
	template <typename T = int32_t> T get_BubblePriority() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAD94))(this);
	}
	template <typename T = void> T set_BubblePriority(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAD9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BubbleCondition() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EADA4))(this);
	}
	template <typename T = void> T set_BubbleCondition(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EADAC))(this, value);
	}
	template <typename T = int32_t> T get_BubbleType() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EADB4))(this);
	}
	template <typename T = void> T set_BubbleType(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EADBC))(this, value);
	}
	template <typename T = Il2CppString*> T get_BubbleLocID() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EADC4))(this);
	}
	template <typename T = void> T set_BubbleLocID(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EADCC))(this, value);
	}
	template <typename T = int32_t> T get_Score_limit_default() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EADD4))(this);
	}
	template <typename T = void> T set_Score_limit_default(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EADDC))(this, value);
	}
	template <typename T = int32_t> T get_Score_limit_lower() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EADE4))(this);
	}
	template <typename T = void> T set_Score_limit_lower(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EADEC))(this, value);
	}
	template <typename T = int32_t> T get_Score_limit_upper() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EADF4))(this);
	}
	template <typename T = void> T set_Score_limit_upper(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EADFC))(this, value);
	}
	template <typename T = int32_t> T get_Time_limit_default() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE04))(this);
	}
	template <typename T = void> T set_Time_limit_default(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAE0C))(this, value);
	}
	template <typename T = int32_t> T get_Time_limit_lower() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE14))(this);
	}
	template <typename T = void> T set_Time_limit_lower(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAE1C))(this, value);
	}
	template <typename T = int32_t> T get_Time_limit_upper() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE24))(this);
	}
	template <typename T = void> T set_Time_limit_upper(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAE2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond1Desc1() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE34))(this);
	}
	template <typename T = void> T set_LOCID_Cond1Desc1(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAE3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond1Desc1() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE44))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond1Desc2() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE54))(this);
	}
	template <typename T = void> T set_LOCID_Cond1Desc2(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAE5C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond1Desc2() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE64))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond2Desc1() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE74))(this);
	}
	template <typename T = void> T set_LOCID_Cond2Desc1(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAE7C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond2Desc1() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE84))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Cond2Desc2() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAE94))(this);
	}
	template <typename T = void> T set_LOCID_Cond2Desc2(Il2CppString* value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EAE9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Cond2Desc2() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAEA4))(this);
	}
	template <typename T = int32_t> T get_DetailType() {
		return ((T (*)(SPVPPlaylistExtConfConfig*))(Il2CppBase() + 0x30EAEB4))(this);
	}
	template <typename T = void> T set_DetailType(int32_t value) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, int32_t))(Il2CppBase() + 0x30EAEBC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SPVPPlaylistExtConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EAEC4))(this, bytes, position);
	}

};

}
