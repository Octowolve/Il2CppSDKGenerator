#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class QuotedSayingsConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "QuotedSayingsConfConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Quotes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_ID() {
		return ((T (*)(QuotedSayingsConfConfig*))(Il2CppBase() + 0x378D210))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(QuotedSayingsConfConfig*, int32_t))(Il2CppBase() + 0x378D218))(this, value);
	}
	template <typename T = Il2CppString*> T get_Quotes() {
		return ((T (*)(QuotedSayingsConfConfig*))(Il2CppBase() + 0x378D220))(this);
	}
	template <typename T = void> T set_Quotes(Il2CppString* value) {
		return ((T (*)(QuotedSayingsConfConfig*, Il2CppString*))(Il2CppBase() + 0x378D228))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(QuotedSayingsConfConfig*))(Il2CppBase() + 0x378D230))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(QuotedSayingsConfConfig*, Il2CppString*))(Il2CppBase() + 0x378D238))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(QuotedSayingsConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378D240))(this, bytes, position);
	}

};

}
