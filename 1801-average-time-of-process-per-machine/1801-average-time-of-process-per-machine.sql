SELECT 
  machine_id,
  ROUND(AVG(processing_time), 3) AS processing_time
FROM (
  SELECT 
    machine_id,
    process_id,
    MAX(CASE WHEN activity_type = 'end' THEN timestamp END) -
    MAX(CASE WHEN activity_type = 'start' THEN timestamp END) AS processing_time
  FROM Activity
  GROUP BY machine_id, process_id
) AS process_times
GROUP BY machine_id;
