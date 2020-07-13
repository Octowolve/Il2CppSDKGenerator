#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerPictureInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerPictureInfo"));
	}

	template <typename T = uint32_t> T& _selected_pic_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _selected_pic_url() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _selected_frame_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _selected_flag_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_selected_pic_id() {
		return ((T (*)(PlayerPictureInfo*))(Il2CppBase() + 0x4EA8DA8))(this);
	}
	template <typename T = void> T set_selected_pic_id(uint32_t value) {
		return ((T (*)(PlayerPictureInfo*, uint32_t))(Il2CppBase() + 0x4EA8DB0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_selected_pic_url() {
		return ((T (*)(PlayerPictureInfo*))(Il2CppBase() + 0x4EA8DB8))(this);
	}
	template <typename T = void> T set_selected_pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerPictureInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA8DC0))(this, value);
	}
	template <typename T = uint32_t> T get_selected_frame_id() {
		return ((T (*)(PlayerPictureInfo*))(Il2CppBase() + 0x4EA8DC8))(this);
	}
	template <typename T = void> T set_selected_frame_id(uint32_t value) {
		return ((T (*)(PlayerPictureInfo*, uint32_t))(Il2CppBase() + 0x4EA8DD0))(this, value);
	}
	template <typename T = uint32_t> T get_selected_flag_id() {
		return ((T (*)(PlayerPictureInfo*))(Il2CppBase() + 0x4EA8DD8))(this);
	}
	template <typename T = void> T set_selected_flag_id(uint32_t value) {
		return ((T (*)(PlayerPictureInfo*, uint32_t))(Il2CppBase() + 0x4EA8DE0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerPictureInfo*, bool))(Il2CppBase() + 0x4EA8DE8))(this, createIfMissing);
	}

};

}
