#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ProducersConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ProducersConfig"));
	}

	template <typename T = Il2CppString*> T& LastName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& FirstName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& JobPositions() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Department() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Group() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_LastName() {
		return ((T (*)(ProducersConfig*))(Il2CppBase() + 0x37844C4))(this);
	}
	template <typename T = void> T set_LastName(Il2CppString* value) {
		return ((T (*)(ProducersConfig*, Il2CppString*))(Il2CppBase() + 0x37844CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_FirstName() {
		return ((T (*)(ProducersConfig*))(Il2CppBase() + 0x37844D4))(this);
	}
	template <typename T = void> T set_FirstName(Il2CppString* value) {
		return ((T (*)(ProducersConfig*, Il2CppString*))(Il2CppBase() + 0x37844DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_JobPositions() {
		return ((T (*)(ProducersConfig*))(Il2CppBase() + 0x37844E4))(this);
	}
	template <typename T = void> T set_JobPositions(Il2CppString* value) {
		return ((T (*)(ProducersConfig*, Il2CppString*))(Il2CppBase() + 0x37844EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Department() {
		return ((T (*)(ProducersConfig*))(Il2CppBase() + 0x37844F4))(this);
	}
	template <typename T = void> T set_Department(Il2CppString* value) {
		return ((T (*)(ProducersConfig*, Il2CppString*))(Il2CppBase() + 0x37844FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Group() {
		return ((T (*)(ProducersConfig*))(Il2CppBase() + 0x3784504))(this);
	}
	template <typename T = void> T set_Group(Il2CppString* value) {
		return ((T (*)(ProducersConfig*, Il2CppString*))(Il2CppBase() + 0x378450C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ProducersConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3784514))(this, bytes, position);
	}

};

}
