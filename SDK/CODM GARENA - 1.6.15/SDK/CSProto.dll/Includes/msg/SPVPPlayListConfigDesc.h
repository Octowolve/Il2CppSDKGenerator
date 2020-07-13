#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SPVPPlayListConfigDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SPVPPlayListConfigDesc"));
	}

	template <typename T = int32_t> T& _MatchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _PlaylistID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _OpenType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _score_limit_default() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _score_limit_lower() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _score_limit_upper() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _time_limit_default() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _time_limit_lower() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _time_limit_upper() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _start_time() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _LevelUnlock() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _LadderUnlock() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _PlaylistType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistTypeDis() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistTypeLocID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistLocID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistDisLocID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistPlayerNumDisLocID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _Bool_Child() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _ShowType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _ShowPirority() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistImageResource() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistImageResourceCDN() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _TagResource() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _TagLocID() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _NumofPlayer() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCOpenTimeDesc() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_Cond1Desc1() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_Cond1Desc2() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_Cond2Desc1() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_Cond2Desc2() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _BubblePriority() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleCondition() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& _BubbleType() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleLocID() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _DetailType() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowStartTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowEndTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint32_t> T& _show_start_time() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& _show_end_time() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint32_t> T& _cd_active_second() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint32_t> T& _cool_down_second() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uint32_t> T& _area_id() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _KeyModeType() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& _EXBuffValue() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& _RankScoreBuffValue() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& _NumOfInvite() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _GameModeId() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& _SpecialEntrance() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _open_time() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint32_t> T& _IsFilterInclude() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleStartTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleEndTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uint32_t> T& _bubble_start_time() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uint32_t> T& _bubble_end_time() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uint32_t> T& _enable_tutorial_video() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xFC);
	}

	template <typename T = int32_t> T get_MatchType() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8938))(this);
	}
	template <typename T = void> T set_MatchType(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8940))(this, value);
	}
	template <typename T = uint32_t> T get_PlaylistID() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8948))(this);
	}
	template <typename T = void> T set_PlaylistID(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8950))(this, value);
	}
	template <typename T = int32_t> T get_OpenType() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8958))(this);
	}
	template <typename T = void> T set_OpenType(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8960))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_StartTime() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8968))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8970))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EndTime() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8978))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8980))(this, value);
	}
	template <typename T = uint32_t> T get_score_limit_default() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8988))(this);
	}
	template <typename T = void> T set_score_limit_default(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8990))(this, value);
	}
	template <typename T = uint32_t> T get_score_limit_lower() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8998))(this);
	}
	template <typename T = void> T set_score_limit_lower(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A89A0))(this, value);
	}
	template <typename T = uint32_t> T get_score_limit_upper() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A89A8))(this);
	}
	template <typename T = void> T set_score_limit_upper(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A89B0))(this, value);
	}
	template <typename T = uint32_t> T get_time_limit_default() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A89B8))(this);
	}
	template <typename T = void> T set_time_limit_default(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A89C0))(this, value);
	}
	template <typename T = uint32_t> T get_time_limit_lower() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A89C8))(this);
	}
	template <typename T = void> T set_time_limit_lower(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A89D0))(this, value);
	}
	template <typename T = uint32_t> T get_time_limit_upper() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A89D8))(this);
	}
	template <typename T = void> T set_time_limit_upper(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A89E0))(this, value);
	}
	template <typename T = uint32_t> T get_start_time() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A89E8))(this);
	}
	template <typename T = void> T set_start_time(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A89F0))(this, value);
	}
	template <typename T = uint32_t> T get_end_time() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A89F8))(this);
	}
	template <typename T = void> T set_end_time(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8A00))(this, value);
	}
	template <typename T = int32_t> T get_LevelUnlock() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A08))(this);
	}
	template <typename T = void> T set_LevelUnlock(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8A10))(this, value);
	}
	template <typename T = int32_t> T get_LadderUnlock() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A18))(this);
	}
	template <typename T = void> T set_LadderUnlock(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8A20))(this, value);
	}
	template <typename T = int32_t> T get_PlaylistType() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A28))(this);
	}
	template <typename T = void> T set_PlaylistType(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8A30))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistTypeDis() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A38))(this);
	}
	template <typename T = void> T set_PlaylistTypeDis(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8A40))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistTypeLocID() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A48))(this);
	}
	template <typename T = void> T set_PlaylistTypeLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8A50))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistName() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A58))(this);
	}
	template <typename T = void> T set_PlaylistName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8A60))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistLocID() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A68))(this);
	}
	template <typename T = void> T set_PlaylistLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8A70))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistDisLocID() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A78))(this);
	}
	template <typename T = void> T set_PlaylistDisLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8A80))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistPlayerNumDisLocID() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A88))(this);
	}
	template <typename T = void> T set_PlaylistPlayerNumDisLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8A90))(this, value);
	}
	template <typename T = int32_t> T get_Bool_Child() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8A98))(this);
	}
	template <typename T = void> T set_Bool_Child(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8AA0))(this, value);
	}
	template <typename T = int32_t> T get_ShowType() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8AA8))(this);
	}
	template <typename T = void> T set_ShowType(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8AB0))(this, value);
	}
	template <typename T = int32_t> T get_ShowPirority() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8AB8))(this);
	}
	template <typename T = void> T set_ShowPirority(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8AC0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistImageResource() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8AC8))(this);
	}
	template <typename T = void> T set_PlaylistImageResource(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8AD0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistImageResourceCDN() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8AD8))(this);
	}
	template <typename T = void> T set_PlaylistImageResourceCDN(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8AE0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TagResource() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8AE8))(this);
	}
	template <typename T = void> T set_TagResource(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8AF0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TagLocID() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8AF8))(this);
	}
	template <typename T = void> T set_TagLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8B00))(this, value);
	}
	template <typename T = int32_t> T get_NumofPlayer() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B08))(this);
	}
	template <typename T = void> T set_NumofPlayer(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8B10))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCOpenTimeDesc() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B18))(this);
	}
	template <typename T = void> T set_LOCOpenTimeDesc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8B20))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_Cond1Desc1() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B28))(this);
	}
	template <typename T = void> T set_LOCID_Cond1Desc1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8B30))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_Cond1Desc2() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B38))(this);
	}
	template <typename T = void> T set_LOCID_Cond1Desc2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8B40))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_Cond2Desc1() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B48))(this);
	}
	template <typename T = void> T set_LOCID_Cond2Desc1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8B50))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_Cond2Desc2() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B58))(this);
	}
	template <typename T = void> T set_LOCID_Cond2Desc2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8B60))(this, value);
	}
	template <typename T = int32_t> T get_BubblePriority() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B68))(this);
	}
	template <typename T = void> T set_BubblePriority(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8B70))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleCondition() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B78))(this);
	}
	template <typename T = void> T set_BubbleCondition(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8B80))(this, value);
	}
	template <typename T = int32_t> T get_BubbleType() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B88))(this);
	}
	template <typename T = void> T set_BubbleType(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8B90))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleLocID() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8B98))(this);
	}
	template <typename T = void> T set_BubbleLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8BA0))(this, value);
	}
	template <typename T = int32_t> T get_DetailType() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8BA8))(this);
	}
	template <typename T = void> T set_DetailType(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8BB0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowStartTime() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8BB8))(this);
	}
	template <typename T = void> T set_ShowStartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8BC0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowEndTime() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8BC8))(this);
	}
	template <typename T = void> T set_ShowEndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8BD0))(this, value);
	}
	template <typename T = uint32_t> T get_show_start_time() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8BD8))(this);
	}
	template <typename T = void> T set_show_start_time(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8BE0))(this, value);
	}
	template <typename T = uint32_t> T get_show_end_time() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8BE8))(this);
	}
	template <typename T = void> T set_show_end_time(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8BF0))(this, value);
	}
	template <typename T = uint32_t> T get_cd_active_second() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8BF8))(this);
	}
	template <typename T = void> T set_cd_active_second(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8C00))(this, value);
	}
	template <typename T = uint32_t> T get_cool_down_second() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C08))(this);
	}
	template <typename T = void> T set_cool_down_second(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8C10))(this, value);
	}
	template <typename T = uint32_t> T get_area_id() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C18))(this);
	}
	template <typename T = void> T set_area_id(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8C20))(this, value);
	}
	template <typename T = bool> T get_KeyModeType() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C28))(this);
	}
	template <typename T = void> T set_KeyModeType(bool value) {
		return ((T (*)(SPVPPlayListConfigDesc*, bool))(Il2CppBase() + 0x51A8C30))(this, value);
	}
	template <typename T = float> T get_EXBuffValue() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C38))(this);
	}
	template <typename T = void> T set_EXBuffValue(float value) {
		return ((T (*)(SPVPPlayListConfigDesc*, float))(Il2CppBase() + 0x51A8C40))(this, value);
	}
	template <typename T = float> T get_RankScoreBuffValue() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C48))(this);
	}
	template <typename T = void> T set_RankScoreBuffValue(float value) {
		return ((T (*)(SPVPPlayListConfigDesc*, float))(Il2CppBase() + 0x51A8C50))(this, value);
	}
	template <typename T = int32_t> T get_NumOfInvite() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C58))(this);
	}
	template <typename T = void> T set_NumOfInvite(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8C60))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_GameModeId() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C68))(this);
	}
	template <typename T = void> T set_GameModeId(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8C70))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C78))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8C80))(this, value);
	}
	template <typename T = int32_t> T get_SpecialEntrance() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C88))(this);
	}
	template <typename T = void> T set_SpecialEntrance(int32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x51A8C90))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_open_time() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8C98))(this);
	}
	template <typename T = uint32_t> T get_IsFilterInclude() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8CA0))(this);
	}
	template <typename T = void> T set_IsFilterInclude(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8CA8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleStartTime() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8CB0))(this);
	}
	template <typename T = void> T set_BubbleStartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8CB8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleEndTime() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8CC0))(this);
	}
	template <typename T = void> T set_BubbleEndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SPVPPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8CC8))(this, value);
	}
	template <typename T = uint32_t> T get_bubble_start_time() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8CD0))(this);
	}
	template <typename T = void> T set_bubble_start_time(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8CD8))(this, value);
	}
	template <typename T = uint32_t> T get_bubble_end_time() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8CE0))(this);
	}
	template <typename T = void> T set_bubble_end_time(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8CE8))(this, value);
	}
	template <typename T = uint32_t> T get_enable_tutorial_video() {
		return ((T (*)(SPVPPlayListConfigDesc*))(Il2CppBase() + 0x51A8CF0))(this);
	}
	template <typename T = void> T set_enable_tutorial_video(uint32_t value) {
		return ((T (*)(SPVPPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x51A8CF8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SPVPPlayListConfigDesc*, bool))(Il2CppBase() + 0x51A8D00))(this, createIfMissing);
	}

};

}
