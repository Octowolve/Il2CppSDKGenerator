#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PVENewGuideConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PVENewGuideConfigConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& NewGuideItemType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RepeatTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_GuideText() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_GuideText_2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_GuideText_3() {
		return *(T*)((uintptr_t)this + 0x24);
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

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B07C))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B11C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(PVENewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x378B124))(this, value);
	}
	template <typename T = int32_t> T get_NewGuideItemType() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B12C))(this);
	}
	template <typename T = void> T set_NewGuideItemType(int32_t value) {
		return ((T (*)(PVENewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x378B134))(this, value);
	}
	template <typename T = int32_t> T get_RepeatTime() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B13C))(this);
	}
	template <typename T = void> T set_RepeatTime(int32_t value) {
		return ((T (*)(PVENewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x378B144))(this, value);
	}
	template <typename T = float> T get_Time() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B14C))(this);
	}
	template <typename T = void> T set_Time(float value) {
		return ((T (*)(PVENewGuideConfigConfig*, float))(Il2CppBase() + 0x378B154))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_GuideText() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B15C))(this);
	}
	template <typename T = void> T set_LOCID_GuideText(Il2CppString* value) {
		return ((T (*)(PVENewGuideConfigConfig*, Il2CppString*))(Il2CppBase() + 0x378B164))(this, value);
	}
	template <typename T = Il2CppString*> T get_GuideText() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B16C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_GuideText_2() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B17C))(this);
	}
	template <typename T = void> T set_LOCID_GuideText_2(Il2CppString* value) {
		return ((T (*)(PVENewGuideConfigConfig*, Il2CppString*))(Il2CppBase() + 0x378B184))(this, value);
	}
	template <typename T = Il2CppString*> T get_GuideText_2() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B18C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_GuideText_3() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B19C))(this);
	}
	template <typename T = void> T set_LOCID_GuideText_3(Il2CppString* value) {
		return ((T (*)(PVENewGuideConfigConfig*, Il2CppString*))(Il2CppBase() + 0x378B1A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_GuideText_3() {
		return ((T (*)(PVENewGuideConfigConfig*))(Il2CppBase() + 0x378B1AC))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PVENewGuideConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378B1BC))(this, bytes, position);
	}

};

}
