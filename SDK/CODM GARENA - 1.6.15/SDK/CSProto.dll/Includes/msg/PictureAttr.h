#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PictureAttr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PictureAttr"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _duration_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(PictureAttr*))(Il2CppBase() + 0x4EA6150))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(PictureAttr*, uint32_t))(Il2CppBase() + 0x4EA6158))(this, value);
	}
	template <typename T = uint32_t> T get_time() {
		return ((T (*)(PictureAttr*))(Il2CppBase() + 0x4EA6160))(this);
	}
	template <typename T = void> T set_time(uint32_t value) {
		return ((T (*)(PictureAttr*, uint32_t))(Il2CppBase() + 0x4EA6168))(this, value);
	}
	template <typename T = int32_t> T get_duration_type() {
		return ((T (*)(PictureAttr*))(Il2CppBase() + 0x4EA6170))(this);
	}
	template <typename T = void> T set_duration_type(int32_t value) {
		return ((T (*)(PictureAttr*, int32_t))(Il2CppBase() + 0x4EA6178))(this, value);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(PictureAttr*))(Il2CppBase() + 0x4EA6180))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(PictureAttr*, uint32_t))(Il2CppBase() + 0x4EA6188))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PictureAttr*, bool))(Il2CppBase() + 0x4EA6190))(this, createIfMissing);
	}

};

}
