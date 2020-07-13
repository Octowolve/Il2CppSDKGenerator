#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRPlayListParentConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRPlayListParentConfConfig"));
	}

	template <typename T = Il2CppString*> T& PlaylistName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MatchType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PlaylistID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ShowPirority() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& NumOfInvite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& PlaylistLocID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& PlaylistDisLocID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& LevelUnlock() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& LadderUnlock() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& OpenType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& Cd_active_second() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& Cool_down_second() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ShowType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& ShowStartTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& ShowEndTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& LOCOpenTimeDesc() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& TagResource() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& TagLocID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& BubblePriority() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& BubbleCondition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& BubbleType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& BubbleLocID() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& Open_time_1_StartTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& Open_time_1_EndTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& Open_time_1_cd_active_second() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& Open_time_1_cool_down_second() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& Open_time_2_StartTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& Open_time_2_EndTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& Open_time_2_cd_active_second() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& Open_time_2_cool_down_second() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& BubbleStartTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& BubbleEndTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_PlaylistName() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D522A0))(this);
	}
	template <typename T = void> T set_PlaylistName(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D522A8))(this, value);
	}
	template <typename T = int32_t> T get_MatchType() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D522B0))(this);
	}
	template <typename T = void> T set_MatchType(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D522B8))(this, value);
	}
	template <typename T = int32_t> T get_PlaylistID() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D522C0))(this);
	}
	template <typename T = void> T set_PlaylistID(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D522C8))(this, value);
	}
	template <typename T = int32_t> T get_ShowPirority() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D522D0))(this);
	}
	template <typename T = void> T set_ShowPirority(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D522D8))(this, value);
	}
	template <typename T = int32_t> T get_NumOfInvite() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D522E0))(this);
	}
	template <typename T = void> T set_NumOfInvite(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D522E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistLocID() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D522F0))(this);
	}
	template <typename T = void> T set_PlaylistLocID(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D522F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistDisLocID() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52300))(this);
	}
	template <typename T = void> T set_PlaylistDisLocID(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D52308))(this, value);
	}
	template <typename T = int32_t> T get_LevelUnlock() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52310))(this);
	}
	template <typename T = void> T set_LevelUnlock(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D52318))(this, value);
	}
	template <typename T = int32_t> T get_LadderUnlock() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52320))(this);
	}
	template <typename T = void> T set_LadderUnlock(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D52328))(this, value);
	}
	template <typename T = int32_t> T get_OpenType() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52330))(this);
	}
	template <typename T = void> T set_OpenType(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D52338))(this, value);
	}
	template <typename T = Il2CppString*> T get_StartTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52340))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D52348))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52350))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D52358))(this, value);
	}
	template <typename T = uint32_t> T get_Cd_active_second() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52360))(this);
	}
	template <typename T = void> T set_Cd_active_second(uint32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, uint32_t))(Il2CppBase() + 0x2D52368))(this, value);
	}
	template <typename T = uint32_t> T get_Cool_down_second() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52370))(this);
	}
	template <typename T = void> T set_Cool_down_second(uint32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, uint32_t))(Il2CppBase() + 0x2D52378))(this, value);
	}
	template <typename T = int32_t> T get_ShowType() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52380))(this);
	}
	template <typename T = void> T set_ShowType(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D52388))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShowStartTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52390))(this);
	}
	template <typename T = void> T set_ShowStartTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D52398))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShowEndTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D523A0))(this);
	}
	template <typename T = void> T set_ShowEndTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D523A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCOpenTimeDesc() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D523B0))(this);
	}
	template <typename T = void> T set_LOCOpenTimeDesc(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D523B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_TagResource() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D523C0))(this);
	}
	template <typename T = void> T set_TagResource(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D523C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_TagLocID() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D523D0))(this);
	}
	template <typename T = void> T set_TagLocID(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D523D8))(this, value);
	}
	template <typename T = int32_t> T get_BubblePriority() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D523E0))(this);
	}
	template <typename T = void> T set_BubblePriority(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D523E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_BubbleCondition() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D523F0))(this);
	}
	template <typename T = void> T set_BubbleCondition(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D523F8))(this, value);
	}
	template <typename T = int32_t> T get_BubbleType() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52400))(this);
	}
	template <typename T = void> T set_BubbleType(int32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, int32_t))(Il2CppBase() + 0x2D52408))(this, value);
	}
	template <typename T = Il2CppString*> T get_BubbleLocID() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52410))(this);
	}
	template <typename T = void> T set_BubbleLocID(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D52418))(this, value);
	}
	template <typename T = Il2CppString*> T get_Open_time_1_StartTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52420))(this);
	}
	template <typename T = void> T set_Open_time_1_StartTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D52428))(this, value);
	}
	template <typename T = Il2CppString*> T get_Open_time_1_EndTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52430))(this);
	}
	template <typename T = void> T set_Open_time_1_EndTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D52438))(this, value);
	}
	template <typename T = uint32_t> T get_Open_time_1_cd_active_second() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52440))(this);
	}
	template <typename T = void> T set_Open_time_1_cd_active_second(uint32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, uint32_t))(Il2CppBase() + 0x2D52448))(this, value);
	}
	template <typename T = uint32_t> T get_Open_time_1_cool_down_second() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52450))(this);
	}
	template <typename T = void> T set_Open_time_1_cool_down_second(uint32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, uint32_t))(Il2CppBase() + 0x2D52458))(this, value);
	}
	template <typename T = Il2CppString*> T get_Open_time_2_StartTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52460))(this);
	}
	template <typename T = void> T set_Open_time_2_StartTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D52468))(this, value);
	}
	template <typename T = Il2CppString*> T get_Open_time_2_EndTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52470))(this);
	}
	template <typename T = void> T set_Open_time_2_EndTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D52478))(this, value);
	}
	template <typename T = uint32_t> T get_Open_time_2_cd_active_second() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52480))(this);
	}
	template <typename T = void> T set_Open_time_2_cd_active_second(uint32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, uint32_t))(Il2CppBase() + 0x2D52488))(this, value);
	}
	template <typename T = uint32_t> T get_Open_time_2_cool_down_second() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D52490))(this);
	}
	template <typename T = void> T set_Open_time_2_cool_down_second(uint32_t value) {
		return ((T (*)(BRPlayListParentConfConfig*, uint32_t))(Il2CppBase() + 0x2D52498))(this, value);
	}
	template <typename T = Il2CppString*> T get_BubbleStartTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D524A0))(this);
	}
	template <typename T = void> T set_BubbleStartTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D524A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_BubbleEndTime() {
		return ((T (*)(BRPlayListParentConfConfig*))(Il2CppBase() + 0x2D524B0))(this);
	}
	template <typename T = void> T set_BubbleEndTime(Il2CppString* value) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D524B8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRPlayListParentConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D524C0))(this, bytes, position);
	}

};

}
