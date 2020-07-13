#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActvBoxItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActvBoxItem"));
	}

	template <typename T = uint64_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _box_status() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_box_id() {
		return ((T (*)(ActvBoxItem*))(Il2CppBase() + 0x510B244))(this);
	}
	template <typename T = void> T set_box_id(uint64_t value) {
		return ((T (*)(ActvBoxItem*, uint64_t))(Il2CppBase() + 0x510B24C))(this, value);
	}
	template <typename T = uintptr_t> T get_box_status() {
		return ((T (*)(ActvBoxItem*))(Il2CppBase() + 0x510B25C))(this);
	}
	template <typename T = void> T set_box_status(uintptr_t value) {
		return ((T (*)(ActvBoxItem*, uintptr_t))(Il2CppBase() + 0x510B264))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActvBoxItem*, bool))(Il2CppBase() + 0x510B26C))(this, createIfMissing);
	}

};

}
