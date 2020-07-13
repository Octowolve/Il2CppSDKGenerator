#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class QuickTeamPlaylistMappingConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "QuickTeamPlaylistMappingConfig"));
	}

	template <typename T = int32_t> T& RoomType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& RoomTypeName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Playlist() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PlaylistName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_RoomType() {
		return ((T (*)(QuickTeamPlaylistMappingConfig*))(Il2CppBase() + 0x378CF40))(this);
	}
	template <typename T = void> T set_RoomType(int32_t value) {
		return ((T (*)(QuickTeamPlaylistMappingConfig*, int32_t))(Il2CppBase() + 0x378CF48))(this, value);
	}
	template <typename T = Il2CppString*> T get_RoomTypeName() {
		return ((T (*)(QuickTeamPlaylistMappingConfig*))(Il2CppBase() + 0x378CF50))(this);
	}
	template <typename T = void> T set_RoomTypeName(Il2CppString* value) {
		return ((T (*)(QuickTeamPlaylistMappingConfig*, Il2CppString*))(Il2CppBase() + 0x378CF58))(this, value);
	}
	template <typename T = int32_t> T get_Playlist() {
		return ((T (*)(QuickTeamPlaylistMappingConfig*))(Il2CppBase() + 0x378CF60))(this);
	}
	template <typename T = void> T set_Playlist(int32_t value) {
		return ((T (*)(QuickTeamPlaylistMappingConfig*, int32_t))(Il2CppBase() + 0x378CF68))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistName() {
		return ((T (*)(QuickTeamPlaylistMappingConfig*))(Il2CppBase() + 0x378CF70))(this);
	}
	template <typename T = void> T set_PlaylistName(Il2CppString* value) {
		return ((T (*)(QuickTeamPlaylistMappingConfig*, Il2CppString*))(Il2CppBase() + 0x378CF78))(this, value);
	}
	template <typename T = Il2CppString*> T get_StartTime() {
		return ((T (*)(QuickTeamPlaylistMappingConfig*))(Il2CppBase() + 0x378CF80))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppString* value) {
		return ((T (*)(QuickTeamPlaylistMappingConfig*, Il2CppString*))(Il2CppBase() + 0x378CF88))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(QuickTeamPlaylistMappingConfig*))(Il2CppBase() + 0x378CF90))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(QuickTeamPlaylistMappingConfig*, Il2CppString*))(Il2CppBase() + 0x378CF98))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(QuickTeamPlaylistMappingConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378CFA0))(this, bytes, position);
	}

};

}
