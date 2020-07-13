#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class OSX509Certificates
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "Mono.Security.X509", "OSX509Certificates"));
	}

	template <typename T = uintptr_t> static T& sslsecpolicy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T SecCertificateCreateWithData(uintptr_t allocator, uintptr_t nsdataRef) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C96EB0))(0, allocator, nsdataRef);
	}
	template <typename T = int32_t> static T SecTrustCreateWithCertificates(uintptr_t certOrCertArray, uintptr_t policies, uintptr_t* sectrustref) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4C96F98))(0, certOrCertArray, policies, sectrustref);
	}
	template <typename T = uintptr_t> static T SecPolicyCreateSSL(int32_t server, uintptr_t cfStringHostname) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4C96DC8))(0, server, cfStringHostname);
	}
	template <typename T = int32_t> static T SecTrustEvaluate(uintptr_t secTrustRef, uintptr_t* secTrustResultTime) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4C97098))(0, secTrustRef, secTrustResultTime);
	}
	template <typename T = uintptr_t> static T CFDataCreate(uintptr_t allocator, uintptr_t bytes, uintptr_t length) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C97180))(0, allocator, bytes, length);
	}
	template <typename T = void> static T CFRelease(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C9726C))(0, handle);
	}
	template <typename T = uintptr_t> static T CFArrayCreate(uintptr_t allocator, uintptr_t values, uintptr_t numValues, uintptr_t callbacks) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C9734C))(0, allocator, values, numValues, callbacks);
	}
	template <typename T = uintptr_t> static T MakeCFData(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C97440))(0, data);
	}
	template <typename T = uintptr_t> static T FromIntPtrs(Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C97548))(0, values);
	}
	template <typename T = uintptr_t> static T TrustEvaluateSsl(uintptr_t certificates) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C97680))(0, certificates);
	}
	template <typename T = uintptr_t> static T _TrustEvaluateSsl(uintptr_t certificates) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C977C0))(0, certificates);
	}

};

}
