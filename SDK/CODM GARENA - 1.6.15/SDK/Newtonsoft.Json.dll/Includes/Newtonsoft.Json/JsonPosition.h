#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonPosition"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& SpecialCharacters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Position() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& PropertyName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HasIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T CalculateLength() {
		return ((T (*)(JsonPosition*))(Il2CppBase() + 0x40A5968))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t sb) {
		return ((T (*)(JsonPosition*, uintptr_t))(Il2CppBase() + 0x40A5B34))(this, sb);
	}
	template <typename T = bool> static T TypeHasIndex(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x40A5838))(0, type);
	}
	template <typename T = Il2CppString*> static T BuildPath(Il2CppList<uintptr_t>* positions, void* currentPosition) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, void*))(Il2CppBase() + 0x40A5B3C))(0, positions, currentPosition);
	}
	template <typename T = Il2CppString*> static T FormatMessage(uintptr_t lineInfo, Il2CppString* path, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x40A5EC4))(0, lineInfo, path, message);
	}

};

}
