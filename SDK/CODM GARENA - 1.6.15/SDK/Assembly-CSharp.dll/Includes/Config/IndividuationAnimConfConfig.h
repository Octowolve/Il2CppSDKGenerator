#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IndividuationAnimConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IndividuationAnimConfConfig"));
	}

	template <typename T = Il2CppString*> T& AnimName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& AnimIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PlayType() {
		return *(T*)((uintptr_t)this + 0x14);
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

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(IndividuationAnimConfConfig*))(Il2CppBase() + 0x376469C))(this);
	}
	template <typename T = Il2CppString*> T get_AnimName() {
		return ((T (*)(IndividuationAnimConfConfig*))(Il2CppBase() + 0x376473C))(this);
	}
	template <typename T = void> T set_AnimName(Il2CppString* value) {
		return ((T (*)(IndividuationAnimConfConfig*, Il2CppString*))(Il2CppBase() + 0x3764744))(this, value);
	}
	template <typename T = int32_t> T get_AnimIndex() {
		return ((T (*)(IndividuationAnimConfConfig*))(Il2CppBase() + 0x376474C))(this);
	}
	template <typename T = void> T set_AnimIndex(int32_t value) {
		return ((T (*)(IndividuationAnimConfConfig*, int32_t))(Il2CppBase() + 0x3764754))(this, value);
	}
	template <typename T = int32_t> T get_PlayType() {
		return ((T (*)(IndividuationAnimConfConfig*))(Il2CppBase() + 0x376475C))(this);
	}
	template <typename T = void> T set_PlayType(int32_t value) {
		return ((T (*)(IndividuationAnimConfConfig*, int32_t))(Il2CppBase() + 0x3764764))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(IndividuationAnimConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376476C))(this, bytes, position);
	}

};

}
