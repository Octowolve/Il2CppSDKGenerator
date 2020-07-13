#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LoadoutInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LoadoutInfo"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _ovr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _locked() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _attribute() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _selected() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _appearance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _ce_point() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(LoadoutInfo*))(Il2CppBase() + 0x4EA2FF4))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(LoadoutInfo*, int32_t))(Il2CppBase() + 0x4EA2FFC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(LoadoutInfo*))(Il2CppBase() + 0x4EA3004))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LoadoutInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA300C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_items() {
		return ((T (*)(LoadoutInfo*))(Il2CppBase() + 0x4EA3014))(this);
	}
	template <typename T = uint32_t> T get_ovr() {
		return ((T (*)(LoadoutInfo*))(Il2CppBase() + 0x4EA301C))(this);
	}
	template <typename T = void> T set_ovr(uint32_t value) {
		return ((T (*)(LoadoutInfo*, uint32_t))(Il2CppBase() + 0x4EA3024))(this, value);
	}
	template <typename T = int32_t> T get_locked() {
		return ((T (*)(LoadoutInfo*))(Il2CppBase() + 0x4EA302C))(this);
	}
	template <typename T = void> T set_locked(int32_t value) {
		return ((T (*)(LoadoutInfo*, int32_t))(Il2CppBase() + 0x4EA3034))(this, value);
	}
	template <typename T = uintptr_t> T get_attribute() {
		return ((T (*)(LoadoutInfo*))(Il2CppBase() + 0x4EA303C))(this);
	}
	template <typename T = void> T set_attribute(uintptr_t value) {
		return ((T (*)(LoadoutInfo*, uintptr_t))(Il2CppBase() + 0x4EA3044))(this, value);
	}
	template <typename T = int32_t> T get_selected() {
		return ((T (*)(LoadoutInfo*))(Il2CppBase() + 0x4EA304C))(this);
	}
	template <typename T = void> T set_selected(int32_t value) {
		return ((T (*)(LoadoutInfo*, int32_t))(Il2CppBase() + 0x4EA3054))(this, value);
	}
	template <typename T = uintptr_t> T get_appearance() {
		return ((T (*)(LoadoutInfo*))(Il2CppBase() + 0x4EA305C))(this);
	}
	template <typename T = void> T set_appearance(uintptr_t value) {
		return ((T (*)(LoadoutInfo*, uintptr_t))(Il2CppBase() + 0x4EA3064))(this, value);
	}
	template <typename T = uint32_t> T get_ce_point() {
		return ((T (*)(LoadoutInfo*))(Il2CppBase() + 0x4EA306C))(this);
	}
	template <typename T = void> T set_ce_point(uint32_t value) {
		return ((T (*)(LoadoutInfo*, uint32_t))(Il2CppBase() + 0x4EA3074))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LoadoutInfo*, bool))(Il2CppBase() + 0x4EA307C))(this, createIfMissing);
	}

};

}
