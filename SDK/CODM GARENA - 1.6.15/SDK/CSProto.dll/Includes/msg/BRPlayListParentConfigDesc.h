#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BRPlayListParentConfigDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BRPlayListParentConfigDesc"));
	}

	template <typename T = int32_t> T& _MatchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _PlaylistID() {
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
	template <typename T = int32_t> T& _OpenType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowStartTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowEndTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _cd_active_second() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _cool_down_second() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCOpenTimeDesc() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _LevelUnlock() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _LadderUnlock() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _ShowType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& _start_time() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int64_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& _show_start_time() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int64_t> T& _show_end_time() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _TagResource() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _TagLocID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleCondition() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _BubbleType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleLocID() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _BubblePriority() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& _NumOfInvite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _open_time() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleStartTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BubbleEndTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint32_t> T& _bubble_start_time() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint32_t> T& _bubble_end_time() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = int32_t> T get_MatchType() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA08))(this);
	}
	template <typename T = void> T set_MatchType(int32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int32_t))(Il2CppBase() + 0x510EA10))(this, value);
	}
	template <typename T = uint32_t> T get_PlaylistID() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA18))(this);
	}
	template <typename T = void> T set_PlaylistID(uint32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, uint32_t))(Il2CppBase() + 0x510EA20))(this, value);
	}
	template <typename T = int32_t> T get_ShowPirority() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA28))(this);
	}
	template <typename T = void> T set_ShowPirority(int32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int32_t))(Il2CppBase() + 0x510EA30))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistName() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA38))(this);
	}
	template <typename T = void> T set_PlaylistName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EA40))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistLocID() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA48))(this);
	}
	template <typename T = void> T set_PlaylistLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EA50))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PlaylistDisLocID() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA58))(this);
	}
	template <typename T = void> T set_PlaylistDisLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EA60))(this, value);
	}
	template <typename T = int32_t> T get_OpenType() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA68))(this);
	}
	template <typename T = void> T set_OpenType(int32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int32_t))(Il2CppBase() + 0x510EA70))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_StartTime() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA78))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EA80))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EndTime() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA88))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EA90))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowStartTime() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EA98))(this);
	}
	template <typename T = void> T set_ShowStartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EAA0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowEndTime() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EAA8))(this);
	}
	template <typename T = void> T set_ShowEndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EAB0))(this, value);
	}
	template <typename T = uint32_t> T get_cd_active_second() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EAB8))(this);
	}
	template <typename T = void> T set_cd_active_second(uint32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, uint32_t))(Il2CppBase() + 0x510EAC0))(this, value);
	}
	template <typename T = uint32_t> T get_cool_down_second() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EAC8))(this);
	}
	template <typename T = void> T set_cool_down_second(uint32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, uint32_t))(Il2CppBase() + 0x510EAD0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCOpenTimeDesc() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EAD8))(this);
	}
	template <typename T = void> T set_LOCOpenTimeDesc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EAE0))(this, value);
	}
	template <typename T = int32_t> T get_LevelUnlock() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EAE8))(this);
	}
	template <typename T = void> T set_LevelUnlock(int32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int32_t))(Il2CppBase() + 0x510EAF0))(this, value);
	}
	template <typename T = int32_t> T get_LadderUnlock() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EAF8))(this);
	}
	template <typename T = void> T set_LadderUnlock(int32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int32_t))(Il2CppBase() + 0x510EB00))(this, value);
	}
	template <typename T = int32_t> T get_ShowType() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EB08))(this);
	}
	template <typename T = void> T set_ShowType(int32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int32_t))(Il2CppBase() + 0x510EB10))(this, value);
	}
	template <typename T = int64_t> T get_start_time() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EB18))(this);
	}
	template <typename T = void> T set_start_time(int64_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int64_t))(Il2CppBase() + 0x510EB20))(this, value);
	}
	template <typename T = int64_t> T get_end_time() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EB30))(this);
	}
	template <typename T = void> T set_end_time(int64_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int64_t))(Il2CppBase() + 0x510EB38))(this, value);
	}
	template <typename T = int64_t> T get_show_start_time() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EB48))(this);
	}
	template <typename T = void> T set_show_start_time(int64_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int64_t))(Il2CppBase() + 0x510EB50))(this, value);
	}
	template <typename T = int64_t> T get_show_end_time() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EB60))(this);
	}
	template <typename T = void> T set_show_end_time(int64_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int64_t))(Il2CppBase() + 0x510EB68))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TagResource() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EB78))(this);
	}
	template <typename T = void> T set_TagResource(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EB80))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TagLocID() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EB88))(this);
	}
	template <typename T = void> T set_TagLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EB90))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleCondition() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EB98))(this);
	}
	template <typename T = void> T set_BubbleCondition(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EBA0))(this, value);
	}
	template <typename T = int32_t> T get_BubbleType() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EBA8))(this);
	}
	template <typename T = void> T set_BubbleType(int32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int32_t))(Il2CppBase() + 0x510EBB0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleLocID() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EBB8))(this);
	}
	template <typename T = void> T set_BubbleLocID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EBC0))(this, value);
	}
	template <typename T = int32_t> T get_BubblePriority() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EBC8))(this);
	}
	template <typename T = void> T set_BubblePriority(int32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int32_t))(Il2CppBase() + 0x510EBD0))(this, value);
	}
	template <typename T = int32_t> T get_NumOfInvite() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EBD8))(this);
	}
	template <typename T = void> T set_NumOfInvite(int32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, int32_t))(Il2CppBase() + 0x510EBE0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_open_time() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EBE8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleStartTime() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EBF0))(this);
	}
	template <typename T = void> T set_BubbleStartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EBF8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BubbleEndTime() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EC00))(this);
	}
	template <typename T = void> T set_BubbleEndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRPlayListParentConfigDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510EC08))(this, value);
	}
	template <typename T = uint32_t> T get_bubble_start_time() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EC10))(this);
	}
	template <typename T = void> T set_bubble_start_time(uint32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, uint32_t))(Il2CppBase() + 0x510EC18))(this, value);
	}
	template <typename T = uint32_t> T get_bubble_end_time() {
		return ((T (*)(BRPlayListParentConfigDesc*))(Il2CppBase() + 0x510EC20))(this);
	}
	template <typename T = void> T set_bubble_end_time(uint32_t value) {
		return ((T (*)(BRPlayListParentConfigDesc*, uint32_t))(Il2CppBase() + 0x510EC28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BRPlayListParentConfigDesc*, bool))(Il2CppBase() + 0x510EC30))(this, createIfMissing);
	}

};

}
