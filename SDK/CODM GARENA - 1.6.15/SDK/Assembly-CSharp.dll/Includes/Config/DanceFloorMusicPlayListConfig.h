#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DanceFloorMusicPlayListConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DanceFloorMusicPlayListConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& MusicName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Composer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& AudioName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(DanceFloorMusicPlayListConfig*))(Il2CppBase() + 0x463C6F0))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(DanceFloorMusicPlayListConfig*))(Il2CppBase() + 0x463C790))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(DanceFloorMusicPlayListConfig*, uint32_t))(Il2CppBase() + 0x463C798))(this, value);
	}
	template <typename T = Il2CppString*> T get_MusicName() {
		return ((T (*)(DanceFloorMusicPlayListConfig*))(Il2CppBase() + 0x463C7A0))(this);
	}
	template <typename T = void> T set_MusicName(Il2CppString* value) {
		return ((T (*)(DanceFloorMusicPlayListConfig*, Il2CppString*))(Il2CppBase() + 0x463C7A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Composer() {
		return ((T (*)(DanceFloorMusicPlayListConfig*))(Il2CppBase() + 0x463C7B0))(this);
	}
	template <typename T = void> T set_Composer(Il2CppString* value) {
		return ((T (*)(DanceFloorMusicPlayListConfig*, Il2CppString*))(Il2CppBase() + 0x463C7B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_AudioName() {
		return ((T (*)(DanceFloorMusicPlayListConfig*))(Il2CppBase() + 0x463C7C0))(this);
	}
	template <typename T = void> T set_AudioName(Il2CppString* value) {
		return ((T (*)(DanceFloorMusicPlayListConfig*, Il2CppString*))(Il2CppBase() + 0x463C7C8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(DanceFloorMusicPlayListConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463C7D0))(this, bytes, position);
	}

};

}
