#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSModeEntrance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSModeEntrance"));
	}

	template <typename T = uint32_t> T& _FeatureID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ModeCategory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _PlaylistID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _FeaturePicCDN() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _FeatureDescLOCID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _ModeAdStartTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _ModeAdEndTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _ShowFacePic() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _ModeAutoChange() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppString*> T& _FacePicCDN() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _ModeAdStartTimeStamp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _ModeAdEndTimeStamp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _MapIds() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uint32_t> T get_FeatureID() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0D30))(this);
	}
	template <typename T = void> T set_FeatureID(uint32_t value) {
		return ((T (*)(CSModeEntrance*, uint32_t))(Il2CppBase() + 0x51F0D38))(this, value);
	}
	template <typename T = uint32_t> T get_ModeCategory() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0D40))(this);
	}
	template <typename T = void> T set_ModeCategory(uint32_t value) {
		return ((T (*)(CSModeEntrance*, uint32_t))(Il2CppBase() + 0x51F0D48))(this, value);
	}
	template <typename T = uint32_t> T get_PlaylistID() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0D50))(this);
	}
	template <typename T = void> T set_PlaylistID(uint32_t value) {
		return ((T (*)(CSModeEntrance*, uint32_t))(Il2CppBase() + 0x51F0D58))(this, value);
	}
	template <typename T = Il2CppString*> T get_FeaturePicCDN() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0D60))(this);
	}
	template <typename T = void> T set_FeaturePicCDN(Il2CppString* value) {
		return ((T (*)(CSModeEntrance*, Il2CppString*))(Il2CppBase() + 0x51F0D68))(this, value);
	}
	template <typename T = Il2CppString*> T get_FeatureDescLOCID() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0D70))(this);
	}
	template <typename T = void> T set_FeatureDescLOCID(Il2CppString* value) {
		return ((T (*)(CSModeEntrance*, Il2CppString*))(Il2CppBase() + 0x51F0D78))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeAdStartTime() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0D80))(this);
	}
	template <typename T = void> T set_ModeAdStartTime(Il2CppString* value) {
		return ((T (*)(CSModeEntrance*, Il2CppString*))(Il2CppBase() + 0x51F0D88))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeAdEndTime() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0D90))(this);
	}
	template <typename T = void> T set_ModeAdEndTime(Il2CppString* value) {
		return ((T (*)(CSModeEntrance*, Il2CppString*))(Il2CppBase() + 0x51F0D98))(this, value);
	}
	template <typename T = bool> T get_ShowFacePic() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0DA0))(this);
	}
	template <typename T = void> T set_ShowFacePic(bool value) {
		return ((T (*)(CSModeEntrance*, bool))(Il2CppBase() + 0x51F0DA8))(this, value);
	}
	template <typename T = bool> T get_ModeAutoChange() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0DB0))(this);
	}
	template <typename T = void> T set_ModeAutoChange(bool value) {
		return ((T (*)(CSModeEntrance*, bool))(Il2CppBase() + 0x51F0DB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_FacePicCDN() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0DC0))(this);
	}
	template <typename T = void> T set_FacePicCDN(Il2CppString* value) {
		return ((T (*)(CSModeEntrance*, Il2CppString*))(Il2CppBase() + 0x51F0DC8))(this, value);
	}
	template <typename T = uint32_t> T get_ModeAdStartTimeStamp() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0DD0))(this);
	}
	template <typename T = void> T set_ModeAdStartTimeStamp(uint32_t value) {
		return ((T (*)(CSModeEntrance*, uint32_t))(Il2CppBase() + 0x51F0DD8))(this, value);
	}
	template <typename T = uint32_t> T get_ModeAdEndTimeStamp() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0DE0))(this);
	}
	template <typename T = void> T set_ModeAdEndTimeStamp(uint32_t value) {
		return ((T (*)(CSModeEntrance*, uint32_t))(Il2CppBase() + 0x51F0DE8))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapIds() {
		return ((T (*)(CSModeEntrance*))(Il2CppBase() + 0x51F0DF0))(this);
	}
	template <typename T = void> T set_MapIds(Il2CppString* value) {
		return ((T (*)(CSModeEntrance*, Il2CppString*))(Il2CppBase() + 0x51F0DF8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSModeEntrance*, bool))(Il2CppBase() + 0x51F0E00))(this, createIfMissing);
	}

};

}
