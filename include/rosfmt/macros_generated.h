// !!!!!!!!!!!!!!!!!!!!!!! This is a generated file, do not edit manually

#if (ROSCONSOLE_MIN_SEVERITY > ROSCONSOLE_SEVERITY_DEBUG)
#define ROSFMT_DEBUG(...)
#define ROSFMT_DEBUG_NAMED(name, ...)
#define ROSFMT_DEBUG_COND(cond, ...)
#define ROSFMT_DEBUG_COND_NAMED(cond, name, ...)
#define ROSFMT_DEBUG_ONCE(...)
#define ROSFMT_DEBUG_ONCE_NAMED(name, ...)
#define ROSFMT_DEBUG_THROTTLE(period, ...)
#define ROSFMT_DEBUG_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_DEBUG_DELAYED_THROTTLE(period, ...)
#define ROSFMT_DEBUG_DELAYED_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_DEBUG_FILTER(filter, ...)
#define ROSFMT_DEBUG_FILTER_NAMED(filter, name, ...)
#else
#define ROSFMT_DEBUG(...) ROSFMT_LOG(::ros::console::levels::Debug, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_DEBUG_NAMED(name, ...) ROSFMT_LOG(::ros::console::levels::Debug, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_DEBUG_COND(cond, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Debug, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_DEBUG_COND_NAMED(cond, name, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Debug, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_DEBUG_ONCE(...) ROSFMT_LOG_ONCE(::ros::console::levels::Debug, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_DEBUG_ONCE_NAMED(name, ...) ROSFMT_LOG_ONCE(::ros::console::levels::Debug, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_DEBUG_THROTTLE(period, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Debug, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_DEBUG_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Debug, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_DEBUG_DELAYED_THROTTLE(period, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Debug, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_DEBUG_DELAYED_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Debug, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_DEBUG_FILTER(filter, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Debug, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_DEBUG_FILTER_NAMED(filter, name, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Debug, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#endif

#if (ROSCONSOLE_MIN_SEVERITY > ROSCONSOLE_SEVERITY_INFO)
#define ROSFMT_INFO(...)
#define ROSFMT_INFO_NAMED(name, ...)
#define ROSFMT_INFO_COND(cond, ...)
#define ROSFMT_INFO_COND_NAMED(cond, name, ...)
#define ROSFMT_INFO_ONCE(...)
#define ROSFMT_INFO_ONCE_NAMED(name, ...)
#define ROSFMT_INFO_THROTTLE(period, ...)
#define ROSFMT_INFO_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_INFO_DELAYED_THROTTLE(period, ...)
#define ROSFMT_INFO_DELAYED_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_INFO_FILTER(filter, ...)
#define ROSFMT_INFO_FILTER_NAMED(filter, name, ...)
#else
#define ROSFMT_INFO(...) ROSFMT_LOG(::ros::console::levels::Info, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_INFO_NAMED(name, ...) ROSFMT_LOG(::ros::console::levels::Info, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_INFO_COND(cond, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Info, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_INFO_COND_NAMED(cond, name, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Info, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_INFO_ONCE(...) ROSFMT_LOG_ONCE(::ros::console::levels::Info, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_INFO_ONCE_NAMED(name, ...) ROSFMT_LOG_ONCE(::ros::console::levels::Info, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_INFO_THROTTLE(period, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Info, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_INFO_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Info, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_INFO_DELAYED_THROTTLE(period, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Info, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_INFO_DELAYED_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Info, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_INFO_FILTER(filter, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Info, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_INFO_FILTER_NAMED(filter, name, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Info, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#endif

#if (ROSCONSOLE_MIN_SEVERITY > ROSCONSOLE_SEVERITY_WARN)
#define ROSFMT_WARN(...)
#define ROSFMT_WARN_NAMED(name, ...)
#define ROSFMT_WARN_COND(cond, ...)
#define ROSFMT_WARN_COND_NAMED(cond, name, ...)
#define ROSFMT_WARN_ONCE(...)
#define ROSFMT_WARN_ONCE_NAMED(name, ...)
#define ROSFMT_WARN_THROTTLE(period, ...)
#define ROSFMT_WARN_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_WARN_DELAYED_THROTTLE(period, ...)
#define ROSFMT_WARN_DELAYED_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_WARN_FILTER(filter, ...)
#define ROSFMT_WARN_FILTER_NAMED(filter, name, ...)
#else
#define ROSFMT_WARN(...) ROSFMT_LOG(::ros::console::levels::Warn, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_WARN_NAMED(name, ...) ROSFMT_LOG(::ros::console::levels::Warn, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_WARN_COND(cond, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Warn, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_WARN_COND_NAMED(cond, name, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Warn, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_WARN_ONCE(...) ROSFMT_LOG_ONCE(::ros::console::levels::Warn, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_WARN_ONCE_NAMED(name, ...) ROSFMT_LOG_ONCE(::ros::console::levels::Warn, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_WARN_THROTTLE(period, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Warn, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_WARN_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Warn, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_WARN_DELAYED_THROTTLE(period, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Warn, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_WARN_DELAYED_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Warn, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_WARN_FILTER(filter, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Warn, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_WARN_FILTER_NAMED(filter, name, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Warn, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#endif

#if (ROSCONSOLE_MIN_SEVERITY > ROSCONSOLE_SEVERITY_ERROR)
#define ROSFMT_ERROR(...)
#define ROSFMT_ERROR_NAMED(name, ...)
#define ROSFMT_ERROR_COND(cond, ...)
#define ROSFMT_ERROR_COND_NAMED(cond, name, ...)
#define ROSFMT_ERROR_ONCE(...)
#define ROSFMT_ERROR_ONCE_NAMED(name, ...)
#define ROSFMT_ERROR_THROTTLE(period, ...)
#define ROSFMT_ERROR_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_ERROR_DELAYED_THROTTLE(period, ...)
#define ROSFMT_ERROR_DELAYED_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_ERROR_FILTER(filter, ...)
#define ROSFMT_ERROR_FILTER_NAMED(filter, name, ...)
#else
#define ROSFMT_ERROR(...) ROSFMT_LOG(::ros::console::levels::Error, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_ERROR_NAMED(name, ...) ROSFMT_LOG(::ros::console::levels::Error, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_ERROR_COND(cond, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Error, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_ERROR_COND_NAMED(cond, name, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Error, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_ERROR_ONCE(...) ROSFMT_LOG_ONCE(::ros::console::levels::Error, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_ERROR_ONCE_NAMED(name, ...) ROSFMT_LOG_ONCE(::ros::console::levels::Error, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_ERROR_THROTTLE(period, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Error, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_ERROR_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Error, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_ERROR_DELAYED_THROTTLE(period, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Error, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_ERROR_DELAYED_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Error, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_ERROR_FILTER(filter, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Error, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_ERROR_FILTER_NAMED(filter, name, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Error, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#endif

#if (ROSCONSOLE_MIN_SEVERITY > ROSCONSOLE_SEVERITY_FATAL)
#define ROSFMT_FATAL(...)
#define ROSFMT_FATAL_NAMED(name, ...)
#define ROSFMT_FATAL_COND(cond, ...)
#define ROSFMT_FATAL_COND_NAMED(cond, name, ...)
#define ROSFMT_FATAL_ONCE(...)
#define ROSFMT_FATAL_ONCE_NAMED(name, ...)
#define ROSFMT_FATAL_THROTTLE(period, ...)
#define ROSFMT_FATAL_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_FATAL_DELAYED_THROTTLE(period, ...)
#define ROSFMT_FATAL_DELAYED_THROTTLE_NAMED(period, name, ...)
#define ROSFMT_FATAL_FILTER(filter, ...)
#define ROSFMT_FATAL_FILTER_NAMED(filter, name, ...)
#else
#define ROSFMT_FATAL(...) ROSFMT_LOG(::ros::console::levels::Fatal, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_FATAL_NAMED(name, ...) ROSFMT_LOG(::ros::console::levels::Fatal, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_FATAL_COND(cond, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Fatal, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_FATAL_COND_NAMED(cond, name, ...) ROSFMT_LOG_COND(cond, ::ros::console::levels::Fatal, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_FATAL_ONCE(...) ROSFMT_LOG_ONCE(::ros::console::levels::Fatal, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_FATAL_ONCE_NAMED(name, ...) ROSFMT_LOG_ONCE(::ros::console::levels::Fatal, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_FATAL_THROTTLE(period, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Fatal, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_FATAL_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_THROTTLE(period, ::ros::console::levels::Fatal, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_FATAL_DELAYED_THROTTLE(period, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Fatal, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_FATAL_DELAYED_THROTTLE_NAMED(period, name, ...) ROSFMT_LOG_DELAYED_THROTTLE(period, ::ros::console::levels::Fatal, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#define ROSFMT_FATAL_FILTER(filter, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Fatal, ROSCONSOLE_DEFAULT_NAME, __VA_ARGS__)
#define ROSFMT_FATAL_FILTER_NAMED(filter, name, ...) ROSFMT_LOG_FILTER(filter, ::ros::console::levels::Fatal, std::string(ROSCONSOLE_NAME_PREFIX) + "." + name, __VA_ARGS__)
#endif

