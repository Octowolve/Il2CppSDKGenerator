#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Converters {

class VectorConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Converters", "VectorConverter"));
	}

	template <typename T = uintptr_t> static T& V2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& V3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& V4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& EnableVector2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& EnableVector3() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& EnableVector4() {
		return *(T*)((uintptr_t)this + 0xA);
	}

	template <typename T = bool> T get_EnableVector2() {
		return ((T (*)(VectorConverter*))(Il2CppBase() + 0x4093580))(this);
	}
	template <typename T = void> T set_EnableVector2(bool value) {
		return ((T (*)(VectorConverter*, bool))(Il2CppBase() + 0x4093588))(this, value);
	}
	template <typename T = bool> T get_EnableVector3() {
		return ((T (*)(VectorConverter*))(Il2CppBase() + 0x4093590))(this);
	}
	template <typename T = void> T set_EnableVector3(bool value) {
		return ((T (*)(VectorConverter*, bool))(Il2CppBase() + 0x4093598))(this, value);
	}
	template <typename T = bool> T get_EnableVector4() {
		return ((T (*)(VectorConverter*))(Il2CppBase() + 0x40935A0))(this);
	}
	template <typename T = void> T set_EnableVector4(bool value) {
		return ((T (*)(VectorConverter*, bool))(Il2CppBase() + 0x40935A8))(this, value);
	}
	template <typename T = void> T WriteJson(uintptr_t writer, uintptr_t value, uintptr_t serializer) {
		return ((T (*)(VectorConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40935D8))(this, writer, value, serializer);
	}
	template <typename T = void> static T WriteVector(uintptr_t writer, float x, float y, void* z, void* w) {
		return ((T (*)(void *, uintptr_t, float, float, void*, void*))(Il2CppBase() + 0x40939F8))(0, writer, x, y, z, w);
	}
	template <typename T = uintptr_t> T ReadJson(uintptr_t reader, uintptr_t objectType, uintptr_t existingValue, uintptr_t serializer) {
		return ((T (*)(VectorConverter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4093C34))(this, reader, objectType, existingValue, serializer);
	}
	template <typename T = bool> T CanConvert(uintptr_t objectType) {
		return ((T (*)(VectorConverter*, uintptr_t))(Il2CppBase() + 0x409432C))(this, objectType);
	}
	template <typename T = Il2CppVector2> static T PopulateVector2(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4093E24))(0, reader);
	}
	template <typename T = Il2CppVector3> static T PopulateVector3(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4093FA0))(0, reader);
	}
	template <typename T = uintptr_t> static T PopulateVector4(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4094154))(0, reader);
	}

};

}
