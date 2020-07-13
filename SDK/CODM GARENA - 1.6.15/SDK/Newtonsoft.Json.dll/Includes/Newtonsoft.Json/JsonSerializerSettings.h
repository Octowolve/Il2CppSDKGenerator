#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonSerializerSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonSerializerSettings"));
	}

	template <typename T = uintptr_t> static T& DefaultContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DefaultCulture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& _formatting() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& _dateFormatHandling() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _dateTimeZoneHandling() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _dateParseHandling() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _floatFormatHandling() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _floatParseHandling() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _stringEscapeHandling() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _culture() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& _checkAdditionalContent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& _maxDepth() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _maxDepthSet() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _dateFormatString() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& _dateFormatStringSet() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& _typeNameAssemblyFormat() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& _defaultValueHandling() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& _preserveReferencesHandling() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& _nullValueHandling() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& _objectCreationHandling() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& _missingMemberHandling() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& _referenceLoopHandling() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = void*> T& _context() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& _constructorHandling() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& _typeNameHandling() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& _metadataPropertyHandling() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = void*> T& Converters() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ContractResolver() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& EqualityComparer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = void*> T& ReferenceResolverProvider() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& TraceWriter() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& Binder() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = void*> T& Error() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = uintptr_t> T get_ReferenceLoopHandling() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40ADE98))(this);
	}
	template <typename T = uintptr_t> T get_MissingMemberHandling() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40ADF64))(this);
	}
	template <typename T = uintptr_t> T get_ObjectCreationHandling() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE030))(this);
	}
	template <typename T = uintptr_t> T get_NullValueHandling() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE0FC))(this);
	}
	template <typename T = uintptr_t> T get_DefaultValueHandling() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE1C8))(this);
	}
	template <typename T = void*> T get_Converters() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40ADB60))(this);
	}
	template <typename T = void> T set_Converters(void* value) {
		return ((T (*)(JsonSerializerSettings*, void*))(Il2CppBase() + 0x40B08B8))(this, value);
	}
	template <typename T = uintptr_t> T get_PreserveReferencesHandling() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40ADDCC))(this);
	}
	template <typename T = uintptr_t> T get_TypeNameHandling() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40ADB68))(this);
	}
	template <typename T = uintptr_t> T get_MetadataPropertyHandling() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40ADC34))(this);
	}
	template <typename T = uintptr_t> T get_TypeNameAssemblyFormat() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40ADD00))(this);
	}
	template <typename T = uintptr_t> T get_ConstructorHandling() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE294))(this);
	}
	template <typename T = uintptr_t> T get_ContractResolver() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE49C))(this);
	}
	template <typename T = uintptr_t> T get_EqualityComparer() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE4B4))(this);
	}
	template <typename T = void*> T get_ReferenceResolverProvider() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE4A4))(this);
	}
	template <typename T = uintptr_t> T get_TraceWriter() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE4AC))(this);
	}
	template <typename T = uintptr_t> T get_Binder() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE4BC))(this);
	}
	template <typename T = void*> T get_Error() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE494))(this);
	}
	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(JsonSerializerSettings*))(Il2CppBase() + 0x40AE360))(this);
	}

};

}
