#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonSerializerInternalBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase"));
	}

	template <typename T = uintptr_t> T& _currentErrorContext() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& _mappings() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Serializer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TraceWriter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& InternalSerializer() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> T get_DefaultReferenceMappings() {
		return ((T (*)(JsonSerializerInternalBase*))(Il2CppBase() + 0x39873E8))(this);
	}
	template <typename T = uintptr_t> T GetErrorContext(uintptr_t currentObject, uintptr_t member, Il2CppString* path, uintptr_t error) {
		return ((T (*)(JsonSerializerInternalBase*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x398C9A8))(this, currentObject, member, path, error);
	}
	template <typename T = void> T ClearErrorContext() {
		return ((T (*)(JsonSerializerInternalBase*))(Il2CppBase() + 0x398CAD0))(this);
	}
	template <typename T = bool> T IsErrorHandled(uintptr_t currentObject, uintptr_t contract, uintptr_t keyValue, uintptr_t lineInfo, Il2CppString* path, uintptr_t ex) {
		return ((T (*)(JsonSerializerInternalBase*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x398CB90))(this, currentObject, contract, keyValue, lineInfo, path, ex);
	}

};

}
