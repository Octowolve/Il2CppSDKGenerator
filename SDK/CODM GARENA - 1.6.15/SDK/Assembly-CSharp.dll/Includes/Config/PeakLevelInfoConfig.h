#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PeakLevelInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PeakLevelInfoConfig"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Level_exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Level_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Level_feedback_sound() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_LevelType() {
		return ((T (*)(PeakLevelInfoConfig*))(Il2CppBase() + 0x377F1E4))(this);
	}
	template <typename T = int32_t> static T GetMaxLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x377F1EC))(0);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PeakLevelInfoConfig*))(Il2CppBase() + 0x377F318))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(PeakLevelInfoConfig*))(Il2CppBase() + 0x377F310))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(PeakLevelInfoConfig*, int32_t))(Il2CppBase() + 0x377F320))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(PeakLevelInfoConfig*))(Il2CppBase() + 0x377F328))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(PeakLevelInfoConfig*, Il2CppString*))(Il2CppBase() + 0x377F330))(this, value);
	}
	template <typename T = int32_t> T get_Level_exp() {
		return ((T (*)(PeakLevelInfoConfig*))(Il2CppBase() + 0x377F308))(this);
	}
	template <typename T = void> T set_Level_exp(int32_t value) {
		return ((T (*)(PeakLevelInfoConfig*, int32_t))(Il2CppBase() + 0x377F338))(this, value);
	}
	template <typename T = int32_t> T get_Level_time() {
		return ((T (*)(PeakLevelInfoConfig*))(Il2CppBase() + 0x377F340))(this);
	}
	template <typename T = void> T set_Level_time(int32_t value) {
		return ((T (*)(PeakLevelInfoConfig*, int32_t))(Il2CppBase() + 0x377F348))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(PeakLevelInfoConfig*))(Il2CppBase() + 0x377F350))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(PeakLevelInfoConfig*, Il2CppString*))(Il2CppBase() + 0x377F358))(this, value);
	}
	template <typename T = Il2CppString*> T get_Level_feedback_sound() {
		return ((T (*)(PeakLevelInfoConfig*))(Il2CppBase() + 0x377F360))(this);
	}
	template <typename T = void> T set_Level_feedback_sound(Il2CppString* value) {
		return ((T (*)(PeakLevelInfoConfig*, Il2CppString*))(Il2CppBase() + 0x377F368))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PeakLevelInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377F370))(this, bytes, position);
	}

};

}
