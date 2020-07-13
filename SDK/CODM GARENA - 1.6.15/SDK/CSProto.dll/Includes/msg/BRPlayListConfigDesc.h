#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BRPlayListConfigDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BRPlayListConfigDesc"));
	}

	template <typename T = int32_t> T& _MatchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _ShowPirority() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistLocID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistDisLocID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _NumofPlayer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& _UnlockCondition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _OpenType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowStartTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowEndTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCOpenTimeDesc() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistImageResource() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PlaylistImageResourceCDN() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _TagResource() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _TagLocID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _SquadTeam() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _DoubleTeam() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _SingleTeam() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _TPPCamera() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _FPPCamera() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _BubblePriority() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleCondition() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _BubbleType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleLocID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _ShowType() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int64_t> T& _start_time() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int64_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int64_t> T& _show_start_time() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int64_t> T& _show_end_time() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _MapId() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _NumofPlayerDesc() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& _AutoFill() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& _cd_active_second() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& _cool_down_second() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _LevelUnlock() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& _LadderUnlock() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& _PlaylistID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _open_time() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xBC);
	}

	template <typename T = int32_t> T get_MatchType() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E6A8))(this);
	}
	template <typename T = void> T set_MatchType(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E6B0))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E6B8))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x510E6C0))(this, value);
	}
	template <typename T = int32_t> T get_ShowPirority() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E6C8))(this);
	}
	template <typename T = void> T set_ShowPirority(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E6D0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistName() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E6D8))(this);
	}
	template <typename T = void> T set_PlaylistName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E6E0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistLocID() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E6E8))(this);
	}
	template <typename T = void> T set_PlaylistLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E6F0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistDisLocID() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E6F8))(this);
	}
	template <typename T = void> T set_PlaylistDisLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E700))(this, value);
	}
	template <typename T = int32_t> T get_NumofPlayer() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E708))(this);
	}
	template <typename T = void> T set_NumofPlayer(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E710))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_UnlockCondition() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E718))(this);
	}
	template <typename T = int32_t> T get_OpenType() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E720))(this);
	}
	template <typename T = void> T set_OpenType(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E728))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_StartTime() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E730))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E738))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EndTime() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E740))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E748))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowStartTime() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E750))(this);
	}
	template <typename T = void> T set_ShowStartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E758))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowEndTime() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E760))(this);
	}
	template <typename T = void> T set_ShowEndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E768))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCOpenTimeDesc() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E770))(this);
	}
	template <typename T = void> T set_LOCOpenTimeDesc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E778))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistImageResource() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E780))(this);
	}
	template <typename T = void> T set_PlaylistImageResource(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E788))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistImageResourceCDN() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E790))(this);
	}
	template <typename T = void> T set_PlaylistImageResourceCDN(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E798))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TagResource() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E7A0))(this);
	}
	template <typename T = void> T set_TagResource(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E7A8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TagLocID() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E7B0))(this);
	}
	template <typename T = void> T set_TagLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E7B8))(this, value);
	}
	template <typename T = int32_t> T get_SquadTeam() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E7C0))(this);
	}
	template <typename T = void> T set_SquadTeam(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E7C8))(this, value);
	}
	template <typename T = int32_t> T get_DoubleTeam() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E7D0))(this);
	}
	template <typename T = void> T set_DoubleTeam(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E7D8))(this, value);
	}
	template <typename T = int32_t> T get_SingleTeam() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E7E0))(this);
	}
	template <typename T = void> T set_SingleTeam(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E7E8))(this, value);
	}
	template <typename T = int32_t> T get_TPPCamera() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E7F0))(this);
	}
	template <typename T = void> T set_TPPCamera(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E7F8))(this, value);
	}
	template <typename T = int32_t> T get_FPPCamera() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E800))(this);
	}
	template <typename T = void> T set_FPPCamera(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E808))(this, value);
	}
	template <typename T = int32_t> T get_BubblePriority() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E810))(this);
	}
	template <typename T = void> T set_BubblePriority(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E818))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleCondition() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E820))(this);
	}
	template <typename T = void> T set_BubbleCondition(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E828))(this, value);
	}
	template <typename T = int32_t> T get_BubbleType() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E830))(this);
	}
	template <typename T = void> T set_BubbleType(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E838))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleLocID() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E840))(this);
	}
	template <typename T = void> T set_BubbleLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E848))(this, value);
	}
	template <typename T = int32_t> T get_ShowType() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E850))(this);
	}
	template <typename T = void> T set_ShowType(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E858))(this, value);
	}
	template <typename T = int64_t> T get_start_time() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E860))(this);
	}
	template <typename T = void> T set_start_time(int64_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int64_t))(Il2CppBase() + 0x510E868))(this, value);
	}
	template <typename T = int64_t> T get_end_time() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E878))(this);
	}
	template <typename T = void> T set_end_time(int64_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int64_t))(Il2CppBase() + 0x510E880))(this, value);
	}
	template <typename T = int64_t> T get_show_start_time() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E890))(this);
	}
	template <typename T = void> T set_show_start_time(int64_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int64_t))(Il2CppBase() + 0x510E898))(this, value);
	}
	template <typename T = int64_t> T get_show_end_time() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E8A8))(this);
	}
	template <typename T = void> T set_show_end_time(int64_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int64_t))(Il2CppBase() + 0x510E8B0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MapId() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E8C0))(this);
	}
	template <typename T = void> T set_MapId(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E8C8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_NumofPlayerDesc() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E8D0))(this);
	}
	template <typename T = void> T set_NumofPlayerDesc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E8D8))(this, value);
	}
	template <typename T = int32_t> T get_AutoFill() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E8E0))(this);
	}
	template <typename T = void> T set_AutoFill(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E8E8))(this, value);
	}
	template <typename T = uint32_t> T get_cd_active_second() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E8F0))(this);
	}
	template <typename T = void> T set_cd_active_second(uint32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x510E8F8))(this, value);
	}
	template <typename T = uint32_t> T get_cool_down_second() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E900))(this);
	}
	template <typename T = void> T set_cool_down_second(uint32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x510E908))(this, value);
	}
	template <typename T = int32_t> T get_LevelUnlock() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E910))(this);
	}
	template <typename T = void> T set_LevelUnlock(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E918))(this, value);
	}
	template <typename T = int32_t> T get_LadderUnlock() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E920))(this);
	}
	template <typename T = void> T set_LadderUnlock(int32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, int32_t))(Il2CppBase() + 0x510E928))(this, value);
	}
	template <typename T = uint32_t> T get_PlaylistID() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E930))(this);
	}
	template <typename T = void> T set_PlaylistID(uint32_t value) {
		return ((T (*)(BRPlayListConfigDesc*, uint32_t))(Il2CppBase() + 0x510E938))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_open_time() {
		return ((T (*)(BRPlayListConfigDesc*))(Il2CppBase() + 0x510E940))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BRPlayListConfigDesc*, bool))(Il2CppBase() + 0x510E948))(this, createIfMissing);
	}

};

}
